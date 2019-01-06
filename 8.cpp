//8.	Realizar un programa que solo nos permita introducir S o N 
#include <stdio.h>
#include <conio.h>
int main(){
	char opc;
	printf("Solo puede ingresar S|N\n");
	do{
		fflush(stdin);//elimina caracteres en memoria
		opc = getch();
		if(opc=='N'||opc=='S')
			printf("%c",opc);
	}while(opc=='N'||opc=='S');
	
	getch();
	return 0;
}
