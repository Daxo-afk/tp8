#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
    	int vector[10];
	int tope = 10;
	int valor;
	for (int i = 0; i < tope; i++){
       cout<<"Ingrese un valor para el vector: "; cin>>valor; 
       vector[i]=valor;
        
    }
	  int maximo = vector[0];
    int minimo = vector[0];
    for (int i = 1; i < tope; i++){
        if (vector[i] > maximo){
            maximo = vector[i];
        }
        if (vector[i] < minimo){
            minimo = vector[i];
        }
    }
    cout << "Valor maximo: " << maximo << endl;
    cout << "Valor minimo: " << minimo << endl;
	return 0; 
}
