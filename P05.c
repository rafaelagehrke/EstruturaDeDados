//5? Fa¸ca um programa para calcular o fatorial de um n´umero dado. O fatorial de um n´umero n ´e
//n × (n - 1) × (n - 2) × . . . × 1, por defini¸c˜ao o fatorial de 0 e 1 ´e 1. Por exemplo, o fatorial de 5 ´e
//120, ou seja, 5 × 4 × 3 × 2 × 1 (perceba que n˜ao ´e necess´ario fazer a ´ultima multiplica¸c˜ao j´a que 1 ´e o
//elemento neutro da multiplica¸c˜ao).

#include <stdio.h>

int main(){
    float num, res;
    
    printf("Digite um numero: ");
    scanf("%f", &num);
    
	for(res = 1; num > 1; num = num - 1){
	      res = res * num;
	}
    
    printf("Resultado: %.2f", res);
    return 0;
}
