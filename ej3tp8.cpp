#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int valor;
	int posicion;
	int manu = 3;
	int vector[manu] = {4, 3, 5};
	int vector2;
	for (int i = 0; i < manu; i++){ 
 vector[i] = vector[i]*2;
	    cout<<""<<vector[i]<<endl;
}
 	cout<<"Ingrese un nuevo valor para ingresar al vector del 0 al 2: "<<endl; cin>>posicion;
	cout<<"Ingrese el nuevo valor"<<endl; cin>>valor;
		for (int i = 0; i < manu; i++){
        if(posicion==i){
 vector[i] = valor;	 
		}
    }
	for (int i = 0; i < manu; i++){    
	    cout<<""<<vector[i]<<endl; 
    }
	return 0;
}
