/**
	Exemplo com recurso de Pesquisa
	Prof. Paulo Barreto
	Data 24/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct Produto{
	int id;
	float quantidade;
};

main(){
	int nProdutos = 3;
	Produto estoque[nProdutos];
	FILE *arquivo;
	
	//Escrita dos dados
	for(int i=0; i<nProdutos; i++){
		printf("Informe o codigo do Produto ");
		scanf("%d", &estoque[i].id);
		printf("Informe a quantidade ");
		scanf("%f", &estoque[i].quantidade);
	}
	arquivo = fopen("c:\\users\pbarreto\desktop\estoque.bdc", "w");
	fwrite(estoque, sizeof(estoque), 1, arquivo);
	printf("Tamanho do file %d\n", sizeof(estoque));
		
	//Pesquisa
	/**
    	SEEK_SET - Começo do arquivo
    	SEEK_CUR - Posição atual do fluxo
        SEEK_END - Fim do arquivo
	**/
	fseek(arquivo, 0, SEEK_SET);
    Produto entidade;    
    fread(&entidade, sizeof(Produto), 2, arquivo);
    printf("%d %.2f\n", entidade.id, entidade.quantidade);
   
    system("PAUSE");
}
