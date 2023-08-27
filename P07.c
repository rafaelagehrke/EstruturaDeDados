//7 Fa¸ca um programa que pe¸ca o sal´ario e o n´umero de filhos dos habitantes de uma regi˜ao. Quando
//o sal´ario informado for menor que zero, as entradas s˜ao finalizadas e ser˜ao apresentadas as m´edias
//salarial e de filhos informados.

#include <stdio.h>

int main(){
	int qntd=0, i=0;
	float sal=0, mediasal=0, mediafilho=0;
	
	
	
	while (1){
		printf("Digite o salario: ");
		scanf("%f", &sal);
		
		if (sal<0){
			break;
		}else{
			mediasal += sal;
			printf("Digite a quantidade de filhos: ");
			scanf("%d", &qntd);	
			mediafilho += qntd;
			i++;		
		}	
	}
	mediasal = mediasal / i;
	mediafilho = mediafilho / i;
	printf("Media salarios: %.1f\n", mediasal);
	printf("Media filhos: %.1f\n", mediafilho);
	return 0;
}
