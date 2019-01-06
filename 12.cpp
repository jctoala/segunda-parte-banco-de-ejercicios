//12.Realizar un programa que imprima los números del 1 al 100 y que calcule la suma de todos los números pares por un lado y por el otro la de todos los impares.
#include <stdio.h>
#include <conio.h>
int main(){
	int impares=0;
	int pares=0;
	int resul;
	for(int i=1; i<=100; i++){
		printf("%d\n",i);
		resul = i%2;
		if(resul==0)
			pares+=i;
		else
			impares+=i;
	}
	printf("\tLa suma de todos los numeros pares: %d\n",pares);
	printf("\tLa suma de todos los numeros impares: %d",impares);
		
	getch();
	return 0;
}
