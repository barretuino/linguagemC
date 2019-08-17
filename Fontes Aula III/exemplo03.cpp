/**
	Ponteiros - Introdução
	Autor: Prof. Paulo Barreto
	Data: 17/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	int numero = 10;
	int outroNumero = -123;
	float notas[] = {1,2,3,4,5,6,7,8,9,10};
		
	//Declaração de um ponteiro
	int *pontNumero = &numero;
	int *pontOutroNumero = &outroNumero;
	float *pontNotas = &notas[0];
	
	//Acessando a variável pelo seu 'alias'
	printf("Valor de numero %d\n", numero);
	printf("Valor de outroNumero %d\n", outroNumero);
	printf("Valor do ponteiro pontNumero %d\n", pontNumero);
	printf("Valor do ponteiro pontOutroNumero %d\n", 
									pontOutroNumero);
	printf("Endereco de notas (vetor) %d\n", &notas);
	printf("valor do Ponteiro de notas %d\n", pontNotas);
	
	//Imprimindo o endereço de alocação da variável
	printf("Endereco de numero %d\n", &numero);
	printf("Endereco de outroNumero %d\n", &outroNumero);
	printf("Endereco do ponteiro pontNumero %d\n", &pontNumero);
	printf("Endereco do ponteiro pontOutroNumero %d\n", 
									&pontOutroNumero);
									
	//Acessando a variável pelo seu ponteiro
	printf("Valor de numero via ponteiro %d\n", *pontNumero);
	printf("Valor de outroNumero via ponteiro %d\n", 
									*pontOutroNumero);
	printf("Nota[2] %.2f\n", notas[2]);
	for(int i=0; i<10; i++){
		printf("Nota[%d] %.2f\n", i, *(pontNotas+i));	
	}
	
	*(pontNotas + 2) = 50;
	printf("Nota na posicao notas[2] %.2f\n", notas[2]);
	
	system("PAUSE");
}

