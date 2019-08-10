/**
	Controle de Estoque com Matriz
	Autor: Paulo Barreto
	Data: 10/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

int entradaValor(){
	int retorno;
	printf("Informe o valor: ");
	scanf("%d", &retorno);
	
	return retorno;
} 

float entradaDecimal(){
	float retorno;
	printf("Informe o decimal: ");
	scanf("%f", &retorno);
	
	return retorno;
} 

main(){
	int nProdutos = 3;
	int produto[nProdutos];
	float quantidade[nProdutos];
	
	//Entrada de Dados
	for(int i=0; i<nProdutos; i++){
		produto[i] = entradaValor();
		quantidade[i] = entradaDecimal();
	}
	
	//Impressão de Dados
	for(int i=0; i<nProdutos; i++){
		printf("O codido do produto e %d\n", produto[i]);
		printf("A quantidade do produto e %f\n", quantidade[i]);
		
		printf("O produto %d tem quantidade de %.2f\n",
				produto[i], quantidade[i]);
	}
	
	system("PAUSE");
}
