#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std; 

int main(void){
	float x; // se declara la variable x pero no y

	cin >> x; // se recibe el valor de x desde entrada estandar
	y=x+2;	// aquí es donde el compilador va a lanzar un error
	cout << y << "\n";


	return 0;
}


 





