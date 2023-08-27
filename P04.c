//4. ? Construa um programa que simule uma calculadora simples. Primeiro ´e informada a opera¸c˜ao
//desejada +, ?, ? ou /, em seguida os dois operandos e apresente o resultado da opera¸c˜ao. O Programa
//´e finalizado quando a opera¸c˜ao desejada for igual `a @.


#include <stdio.h>
#include <string.h>

int main(){
	float n1, n2, res, vc;
	char op[1];
	
	while (1){
		
		printf("\nEscolha o operador:\n+ - Adicao\n- - Subtracao\n* - Multiplicacao\n/ - Divisao\nDigite: ");
		scanf("%s", op);
		
		if(strcmp(op, "@")==0){
			break;
		}else{
			printf("\nDigite o primeiro numero: ");
			scanf("%f", &n1);
			printf("Digite o segundo numero: ");
			scanf("%f", &n2);
			
			if(strcmp(op, "+")==0){
				res = n1+n2;
			}else{
				if(strcmp(op, "-")==0){
					res = n1-n2;
				}else{
					if(strcmp(op, "*")==0){
						res = n1*n2;
					}else{
						if(strcmp(op, "/")==0){
							if (n2==0){
								vc=1;
							}else{
								res = n1/n2;
							}
						}
					}
				}
			}
		}
		
		if (vc==1){
			printf("\nImpossivel realizar divisao com denominador igual a zero.\n");
		}else{
			printf("\nResultado da operacao: %.2f\nDigite @ para encerrar o programa\n", res);
		}
	
	}
    return 0;
}
