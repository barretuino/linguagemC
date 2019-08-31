/**
	Utilizando a escrita de Arquivos Binários
	Prof. Paulo Barreto
	Data: 24/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *arquivo;
	//arquivo = fopen("C:\\BemVindo.txt", "w");
	arquivo = fopen("c:\\users\\pbarreto\\desktop\\BemVindo.txt", "w");
	
	if(arquivo == NULL){
		printf("### ERRO: Falha ao criar acessar arquivo\n");
	}else{
		printf("Sucesso: arquivo aberto %d\n", &arquivo);
	}
	system("PAUSE");
}
