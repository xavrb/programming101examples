#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std; 

int main(void){
	int i;
	for(i=0;i<=10;i++); // es un for vacío, sólo va a aumentar i, pero no hay código dentro
	{ // esto NO pertenece al for anterior, así que solo imprime el valor en que se quedó i
		cout << i << " ";
	}
	return 0;
}


 





