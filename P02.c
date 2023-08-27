//2. ⊙ Fa¸ca um programa que simule a multiplica¸c˜ao atrav´es de adi¸c˜oes. Para tal ser˜ao pedidos os dois
//operandos. Por exemplo se for informado 3 e 4, dever´a ser calculado, atrav´es de soma, 3∗4, ou seja, 12.
//Este c´alculo ´e feito somando o primeiro valor informado por ele mesmo o n´umero de vezes representada
//pelo segundo n´umero. Nesse exemplo, o trˆes seria somado quatro vezes: 3+3+3+3, resultado 12.

#include <stdio.h>

int main(){
    float n1, n2, i, soma=0;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    for (i=0; i<n2; i++){
        soma = soma + n1;
    }
    
    printf("Resultado: %.1f", soma);
    return 0;
}
