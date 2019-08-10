/**
	Trabalhando com Funções Parametrizadas
	Autor: Paulo Barreto
	Data: 10/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

float multiplicacao(int quantidade, float peso){
	return quantidade * peso;
}

/**
	Crie uma função que simule qual seria o valor
	de um produto se eu aplicar 10% de reajuste
**/
float reajustarValor(float valor, float reajuste){
	return (valor * (1 + reajuste));	
}

main(){
	printf("Exemplo de execucao %.2f\n",
			multiplicacao(10, 54.3));
	
	float valor;
	printf("Informe o valor: ");
	scanf("%f", &valor);
	float reajuste;
	printf("Informe o reajuste: ");
	scanf("%f", &reajuste);
	
	float resultado = reajustarValor(valor, (reajuste/100));
	printf("O valor reajustador e %.2f\n", resultado);
	
	system("PAUSE");
}
