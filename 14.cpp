//14.Realizar un programa que imprima el mayor y el menor de una serie de cinco números que vamos a introducir por teclado.
#include <stdio.h>
#include <conio.h>
int main(){
	int num, mayor, menor;
	printf("\tIngrese 5 numeros\n");
	printf("\nIngrese numero: ");
	scanf("%d",&num);
	mayor = menor = num;
	for(int i=0; i<4; i++){
		printf("Ingrese numero: ");
		scanf("%d",&num);
		if(mayor<num)
			mayor = num;
		if(menor>num)
			menor = num;
	}
	printf("El mayor es: %d",mayor);	
	printf("\nEl menor es: %d",menor);	
		
	getch();
	return 0;
}
