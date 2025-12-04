#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	float vector[5];
	int tope = 5;
	float valor , promedio, suma;
	float maximo, minimo;
	for (int i = 0; i < tope; i++){
       cout<<"Ingrese la altura de la persona: "; cin>>valor; 
       vector[i]=valor;
    }
    for(int i = 0; i < tope; i++){
		suma += vector[i];
	}
	promedio = suma/5;
	maximo = vector[0];
	minimo = vector[0];
	for(int i=0; i<tope; i++){
		if(vector[i]>maximo){
		maximo=vector[i];
		}
	}
	for(int i=0; i<tope; i++){
		if(vector[i]<minimo){
			minimo=vector[i];
		}
	}
	cout<<"La suma de todas las alturas es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	cout<<"La altura maxima es: "<<maximo;
	cout<<"La altura minima es: "<<minimo;
	return 0; 
}
