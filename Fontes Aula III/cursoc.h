/**
	Estruturas Compostas
	Autor: Prof.Paulo Barreto
	Data: 17/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

//Declaração do Modelo Conceitual de Data
typedef struct Data{
	int dia, mes, ano;
};

//Declaração do Modelo Conceitual de Endereço
typedef struct Endereco{
	char logradouro[25];
	int numero;
	char bairro[25];
	char cidade[25];
	char cep[9];
	char uf[2];
	char pais[25];
};

//Declaração do Modelo Conceitual de Fornecedor
typedef struct Fornecedor{
	int codigo;
	float cnpj;
	Endereco endereco;
};

//Declaração do Modelo Conceitual de Produto
typedef struct Produto{
	int codigo;
	char descricao[25];
	float quantidade;
	int status = 1;
	Data dataCad; //materialização de uma Data
	Data dataEnc;
	Fornecedor fornecedor; //materialização de um Fornecedor
};

void imprimirData(Data data){
	printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
}

/*main(){
	Produto produto;
	
	produto.codigo = 123;
	produto.dataCad.ano = 2019;
	produto.dataCad.mes = 8;
	produto.dataCad.dia = 17;
	
	produto.dataEnc = {20, 8, 2019};
	
	printf("Data de Cadastro ");
	imprimirData(produto.dataCad);
	
	printf("Data de Encerramento ");
	imprimirData(produto.dataEnc);
	
	system("PAUSE");
}*/


