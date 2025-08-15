#include <iostream>
//Escribir un programa que calcule la suma de los números pares entre 1 y 50.
using namespace std;
int main(){
	
	int suma = 0;
	
	for (int i=1; i<=50; i++){
	 if(i%2 == 0) //Si es numero par
	 suma = suma +i;
	}
		
		
		
	cout<<"La suma de los pares del 1 al 50 es: "<<suma<<endl;
	
	return 0;
	
}
