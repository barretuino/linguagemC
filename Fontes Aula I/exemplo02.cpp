#include <stdio.h>
#include <stdlib.h>

main(){
	
	//Declara��o de Vari�veis
	int numeroPedido;
	float preco;
	char ativo;
	
	//Entrada de Dados
	printf("Informe o numero do pedido: ");
	scanf("%d", &numeroPedido);
	
	printf("Informe o preco: ");
	scanf("%f", &preco);
	
	printf("O pedido esta ativo [S | N]: ");
	scanf("%i", &ativo);
	
	//Sa�da de dados
	printf("Pedido numero %d\n", numeroPedido);
	printf("Preco do pedido %f\n", preco);
	printf("Pedido Ativo %i\n", ativo);
		
	system("PAUSE");
}
