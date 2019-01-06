//9.Realizar un programa que nos permita ingresar un número por teclado y que nos diga si es positivo o negativo.
#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	if(num>0)
		printf("\tEs positivo");// \t,nos permite dar tabulaciones.
	else if(num<0)
		printf("\tEs negativo");
		
	getch();
	return 0;
}
