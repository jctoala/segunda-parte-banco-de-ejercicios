//7.	Realizar un programa que permita introducir tantas frases como queramos y contarlas.
#include <stdio.h>
#include <conio.h>
int main(){
	char frase[20];
	char opcion = 's';
	char cont = 0;
	do{
		fflush(stdin);//elimina caracteres en memoria
		if(opcion=='s'||opcion=='S'){
			printf("----Frase-----\n");
			gets(frase);//scanf("%s",frase);
			cont ++;
		}
		fflush(stdin);
		printf("\nDigite s para introducir otra frase: ");
		scanf("%c",&opcion);
	}while(opcion=='s'||opcion=='S');
	printf("Ha introducido %d frases", cont);
	
	getch();
	return 0;
}
