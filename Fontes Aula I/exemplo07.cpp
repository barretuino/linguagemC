/**
	Exemplo de Estrutura de Matriz
	1 - Tipo pré estabelecido
	2 - Tamanho pré estabelecido
	3 - Ordem fixa
	
	N - número de elementos que a matriz terá
	Indice = 0 até N-1
	
	Autor: Paulo Barreto
	Data: 03/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	//Declaração de Matrizes (no caso Vetor)
	int precos[5];
	
	//Inicialização
	int comum = 10; //comum
	int vetor[4] = {0,0,3, 8}; //coleção de dados
	
	printf("Valor de vetor[1] %d\n", vetor[0]);
	printf("Valor de vetor[2] %d\n", vetor[1]);
	printf("Valor de vetor[3] %d\n", vetor[2]);
	printf("Valor de vetor[4] %d\n", vetor[3]);
	
	//Entrada de dados
	for(int i=0; i<5; i++){
		printf("Informe o preco %d: ", i);
		scanf("%d", &precos[i]);
	}
	
	//Lendo os dados
	for(int i=0; i<5; i++){
		printf("Preco %d e %i\n", i, precos[i]);
	}
	system("PAUSE");
}
