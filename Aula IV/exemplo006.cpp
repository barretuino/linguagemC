/**
	Exemplo de passagem de FILE via função
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct Produto{
	int id;
	float quantidade;


char nome [50] = "c:\\users\pbarreto\desktop\estoque.bdc";

void gravarDados(Produto estoque[2]){
	FILE *arquivo = fopen(nome, "w");
	fwrite(estoque, sizeof(estoque), 1, arquivo);
	fclose(arquivo);
}
void imprimirDados(Produto produto){
	printf("Codigo %d Quantidade %.2f\n", produto.id,
										  produto.quantidade);
}
void lerDados(){
	Produto estoque[2];
	FILE *arquivo = fopen(nome, "r");
	fread(estoque, sizeof(estoque), 1, arquivo);
	for(int i=0; i<2; i++){
		imprimirDados(estoque[i]);
	}
	fclose(arquivo);
}
}
main(){
	Produto estoque[2];
	
	for(int i=0; i<2; i++){
		printf("Informe o codigo: ");
		scanf("%d", &estoque[i].id);
		printf("Informe a quantidade: ");
		scanf("%f", &estoque[i].quantidade);
	}
	
	//Gravar Dados
	gravarDados(estoque);
	//Ler Dados
	lerDados();
	
	system("PAUSE");
}
