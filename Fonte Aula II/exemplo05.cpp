/**
	Sistema de Controle de Estoques de Produtos
	Autor: Paulo Barreto
	Data: 10/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

//Definição da Struct de Produto
struct Produto{
	int id;
	char descricao[25];
	float quantidade;
	int status = 1; //[0 - Inativo | 1 - Ativo]
};

//Declarando uma variável global
int nPosicoes = 3;
struct Produto vProduto[3];
int indice = 0;

//Função de Escrita
void entradaDados(){
	//Declarando uma variável local
	struct Produto entidade;	
	
	printf("Informe o codigo ");
	scanf("%d", &entidade.id);
	printf("Informe a descricao ");
	scanf("%s", &entidade.descricao);
	printf("Informe a quantidade ");
	scanf("%f", &entidade.quantidade);
	
	vProduto[indice++] = entidade;
}

//Função de Leitura
void saidaDados(){
	printf("Codigo %d Descricao %s Quantidade %.2f\n",
		vProduto[indice].id,
		vProduto[indice].descricao,
		vProduto[indice].quantidade);
		
	indice = indice + 1; // indice += 1;
}

/**
	Atividades Práticas a serem realizadas
	1º Elabore uma função para realizar a Pesquisa de itens do tipo Produto
	sugestão: 
		struc Produto pesquisar(int id){
			//Desenvolver a função
		}
		
	2º Elabore uma função para Exclusão de itens do tipo Produtos
	
	3º Crie uma função que seja capaz de alterar um determinado item cadastrado
**/

main(){

	//Entrada em Looping dos dados
	for(int i=0; i<nPosicoes; i++){
		entradaDados();	
	}	
	
	//Imprimir os valores dos dados
	indice = 0;
	for(int i=0; i<nPosicoes; i++){
		saidaDados();	
	}	
			
	system("PAUSE");
}
