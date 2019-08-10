/**
	Trabalhando com Structs
	Autor: Paulo Barreto
	Data: 10/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

//Declaração de um registro (struct em C)
struct Produto{
	int id;
	float quantidade;
};

main(){
	//Declarar uma variável do tipo 'Produto'
	struct Produto produto;

	produto.id = 123;
	produto.quantidade = 75.14;
	
	printf("Codigo do Produto %d\n", produto.id);
	printf("Quantidade do Produto %.2f\n", produto.quantidade);
	
	struct Produto outro;
	printf("Informe o Codigo ");
	scanf("%d", &outro.id);
	printf("Informe a Quantidade ");
	scanf("%f", &outro.quantidade);
	
	printf("Codigo do Produto %d\n", outro.id);
	printf("Quantidade do Produto %.2f\n", outro.quantidade);
	
	system("PAUSE");
}
