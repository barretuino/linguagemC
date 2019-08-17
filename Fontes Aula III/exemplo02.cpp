/**
	Estruturas consumidas por funções
	Autor: Prof. Paulo Barreto
	Data: 17/08/2019
**/
#include <cursoc.h>

//Declaração do Array de Produtos (Global)
Produto array[3];
int indice = 0;

Produto pesquisar(int codigo){
	Produto produto;
	
	for(int i=0; i < 3; i++){
		if(array[i].codigo == codigo){
			produto = array[i];
		}
	}
	
	return produto;
}

void cadastrar(){
	Produto produto;
	
	printf("Informe o Codigo: ");
	scanf("%d", &produto.codigo);
	printf("Informe a Descricao: ");
	scanf("%s", &produto.descricao);
	printf("Informe a Data de Cadastro <dd mm aaaa>: ");
	scanf("%d %d %d", &produto.dataCad.dia,
					  &produto.dataCad.mes,
					  &produto.dataCad.ano);
	printf("Informe o Codigo Fornecedor: ");
	scanf("%d", &produto.fornecedor.codigo);
	printf("Informe o Logradouro do Endereço do Fornecedor: ");
	scanf("%s", &produto.fornecedor.endereco.logradouro);
	
	array[indice++] = produto;
	printf("Produto %d cadastrado com sucesso!\n",
					produto.codigo);
}

void imprimir(Produto item){
	printf("Codigo do Produto %d\n", item.codigo);
	printf("Descricao do Produto %s\n", item.descricao);
	printf("Data de Cadastro ");
	imprimirData(item.dataCad);
}

main(){

	cadastrar();
	
	int codPesquisa;
	printf("Informe o código que deseja pesquisar ");
	scanf("%d", &codPesquisa);
	
	Produto localizado = pesquisar(codPesquisa);
	
	if(localizado.codigo == codPesquisa){
		printf("Produto Localizado\n");		
		
		//Imprimir as informações do Produto Localizado
		imprimir(localizado);
	}else{
		printf("Produto Não Cadastrado\n");
	}
	
	system("PAUSE");
}
