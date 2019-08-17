/**
	Exemplo de manipulação via Ponteiro
	autor: Prof. Paulo Barreto
	data: 17/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

float calcular(float *ponteiro){	
	*ponteiro *= 2;	
	return *ponteiro;
}

void imprimir(float *ponteiro){
	printf("Com correcao %.2f\n", calcular(ponteiro));
}

main(){
	float custo = 34.59;
	
	imprimir(&custo);
	system("PAUSE");
}
