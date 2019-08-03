/**
	Estrutura de Decisão Ternária (?)
	Autor: Paulo Barreto
	Data: 03/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	float salario;
	printf("Informe o seu salario ");
	scanf("%f", &salario);
	
	printf("Paga Imposto %s\n", salario>1500 ? "Sim" : "Nao");
	
	system("PAUSE");
}
