//10.Realizar un programa que nos permita introducir un número por teclado y que nos diga si es par o impar
#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	int esPar;
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	esPar = num%2;
	if(esPar==0)
		printf("\tEs par");// \t,nos permite dar tabulaciones.
	else
		printf("\tEs impar");
		
	getch();
	return 0;
}
