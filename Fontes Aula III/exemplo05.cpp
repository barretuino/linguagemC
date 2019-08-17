/**
	Exemplo de Ponteiros de Estrutura
	autor: Prof. Paulo Barreto
	data: 17/08/2019
**/
#include <cursoc.h>

Produto clonarProduto(Produto *produto){
	Produto retorno = *produto;
	return retorno;
}

Produto copiarProduto(Produto *produto){	
	return *produto;
}

main(){
	Produto array[3];
	
	Produto importado = copiarProduto(&array[0]);
}
