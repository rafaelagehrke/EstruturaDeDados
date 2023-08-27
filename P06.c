//6. ? Dada uma sequˆencia de n n´umeros (um n´umero menor ou igual `a 0 finaliza a sequˆencia), apresentar
//o porcentual de n´umeros informados que s˜ao maior ou igual `a 10 e menor ou igual `a 20. Exemplo:
//5
//6
//11
//21
//0
//% entre 10 e 20: 33.33%

#include <stdio.h>

int main(){
    float num, total, d, perc;
    
    while (1){
    	printf("Digite um numero ou 0 para finalizar: ");
    	scanf("%f", &num);
		total = total + 1;
		
		if (num==0){
			total = total - 1;
			break;
		}else{
			if ((num>=10) && (num<=20)){
				d = d + 1;
			}
		}
	}
	
	perc = ((d/total)*100);
	printf("%% entre 10 e 20: %.2f%%", perc);

    return 0;
}
