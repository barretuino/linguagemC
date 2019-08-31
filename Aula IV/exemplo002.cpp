/**
	Exemplo de Escrita e Leitura de um arquivo Texto
	Prof. Paulo Barreto
	Data 24/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

main(){
	char nome[50];
	int nAlunos;
	//Declarando o FILE que será persistido
	FILE *arquivoBD;
	//Abrindo o arquivo de persistencia
	arquivoBD = fopen("c://users/pbarreto/desktop/alunosBD.bdc", "w");
	
	//Escrita do Arquivo
	if(arquivoBD != NULL){
		printf("Quantos alunos deseja cadastrar? ");
		scanf("%d", &nAlunos);
		
		for(int indice=1; indice<=nAlunos; indice++){
			//Recebendo o valor que será persistido
			printf("Informe o nome do aluno %d:", indice);
			scanf("%s", &nome);
			
			//Realizando a persistencia no FILE
			fprintf(arquivoBD,"\nNome: %s", nome);
		}
		
		//Fechar o FILE: liberar o seu acesso para S.O.
		fclose(arquivoBD);
	}else{
		printf("### ERRO: Falha ao abrir o arquivo ###\n");
	}
	
	//Leitura do nosso Arquivo
	arquivoBD = fopen("c://users/pbarreto/desktop/alunosBD.bdc", "r");
	int ch;
	while((ch=getc(arquivoBD)) != EOF){
		printf("%c", ch);
	}
	//Fechar o FILE: liberar o seu acesso para S.O.
	fclose(arquivoBD);
	
	system("PAUSE");
}
