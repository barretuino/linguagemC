/**
	Repetição Condicional
	while()
	do...while()
	Autor: Paulo Barreto
	Data: 03/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int valor;
	printf("Informe o valor: ");
	scanf("%d", &valor);
	
	int count = 0;
	while(count < valor){
		printf("Valor e %d\n", ++count);		
	}
	
	count = 0;
	do{
		printf("Valor e %d\n", ++count);		
	}while(count < valor);
	
	system("PAUSE");
}
