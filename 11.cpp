//11.Imprimir y contar los múltiplos de 3 desde la unidad hasta un número que introduciremos por teclado.
#include <stdio.h>
#include <conio.h>
int main(){
	int i=1;
	int x;
	int contador=0, resultado;
	printf("Ingrese hasta que numero quiere imprimir: ");
	scanf("%d",&x);
	while(i<=x){
		resultado = i%3;
		if(resultado==0){
			printf("%d\n",i);
			contador++;
		}
		i++;	
	}
	printf("\nHay un total de %d multiplos de 3", contador);
		
	getch();
	return 0;
}
