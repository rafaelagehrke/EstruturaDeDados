//Antonio tem 1,50m e cresce 2cm por ano. Carlos tem 1,10m e cresce 3cm por ano. Fazer um
//programa que calcule quantos anos seriam necess´arios para que Carlos tivesse a mesma altura que
//Antonio. Supondo que os dois crescem todos os anos.

#include <stdio.h>

int main(){
	
	float carlos=1.1, antonio=1.5;
	int ano=0;
	
	while (1){
		carlos = carlos + 0.03;
		antonio = antonio + 0.02;
		ano++;
		
		if (carlos>=antonio){
			printf("Anos: %d", ano);
			break;
		}
	}
	return 0;
}
