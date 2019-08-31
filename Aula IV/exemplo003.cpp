/**	
	Manipulando Arquivos com Struct de Dados
	Prof. Paulo Barreto
	Data 24/08/2019
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
	int dia, mes, ano;
};
typedef struct Hora{
	int hora, minuto, segundo, milisegundo;
};
typedef struct DataHora{
	Data data;
	Hora hora;
};
typedef struct Medida{
	char sensor[5]; //exemplo: TQ001, FL054
	DataHora data;
	float valor;
};

main(){
	Medida arrayMedidas[2];
	FILE *arquivo;
	
	//Entrada de Dados
	for(int i=0; i<2; i++){
		printf("Informe o ID do Sensor: ");
		scanf("%s", &arrayMedidas[i].sensor);
		printf("Informe a DataHora da Medida [dd/mm/aaaa hh:mm:ss:ms]: ");
		scanf("%d/%d/%d %d:%d:%d:%d",
				&arrayMedidas[i].data.data.dia,
				&arrayMedidas[i].data.data.mes,
				&arrayMedidas[i].data.data.ano,
				&arrayMedidas[i].data.hora.hora,
				&arrayMedidas[i].data.hora.minuto,
				&arrayMedidas[i].data.hora.segundo,
				&arrayMedidas[i].data.hora.milisegundo);
		printf("Informe a medida do sensor: ");
		scanf("%f", &arrayMedidas[i].valor);
	}
	
	//Persistencia dos Dados (Salvar no FILE)
	arquivo = fopen("C://users/pbarreto/desktop/medidas.bdc", "w");
	fwrite(arrayMedidas, sizeof(arrayMedidas), 1, arquivo);
	fclose(arquivo);
	
	//Ler o arquivo persistido
	arquivo = fopen("C://users/pbarreto/desktop/medidas.bdc", "r");	
	Medida destino[2];
	fread(destino, sizeof(destino), 1, arquivo);
	fclose(arquivo);
	
	for(int i=0; i<2; i++){
		printf("Sensor: %s\n", destino[i].sensor);
		printf("Data: %d/%d/%d\n", 
					destino[i].data.data.dia,
					destino[i].data.data.mes,
					destino[i].data.data.ano);
		printf("Medida %.2f\n", destino[i].valor);
	}
	
	system("PAUSE");
}



