#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
int vector[4] ={3, 5, 1, 7};
	int nidea, promedio;
	
	nidea = vector[1] + vector[2] + vector[3] + vector[4];
	promedio = nidea/4; 
	cout<<"El valor de la suma de cada elemento de el vector es: "<<nidea<<endl;
	cout<<"Su promedio es: "<<promedio;
	return 0;
}
