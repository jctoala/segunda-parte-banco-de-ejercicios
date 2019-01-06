//13.Imprimir y contar los números que son múltiplos de 2 o de 3 que hay entre 1 y 100.
#include <stdio.h>
#include <conio.h>
int main(){
	int cont=0 ;
	int resul;
	printf("\tLos numeros multiplos de 2 o 3 son\n");
	for(int i=1; i<=100; i++){
		resul = i%2;
		if(resul==0){
			printf("%d\n",i);
			cont++;
		}
		resul = i%3;
		if(resul==0){
			printf("%d\n",i);
			cont++;
		}
	}
	printf("\tHay %d numeros que son multiplos de 2 o 3", cont);
		
	getch();
	return 0;
}
