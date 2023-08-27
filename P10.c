//Um professor gostaria de ter um programa para calcular a m´edia final de seus alunos. Para isso ele
//informa a matr´icula e as 10 notas que o alunos teve durante o semestre. Ap´os informar as 10 notas, o
//programa imprime a mar´icula do aluno e a m´edia que obteve (m´edia aritm´etica simples). Quando o
//professor digitar 0 o programa finaliza e apresenta a m´edia geral da turma. Proibido colocar 10 input
//para pedir as notas.

#include <stdio.h>

int main(){
	
	float nota, media, mediaturma;
	int matricula, i, n;
	
	printf("\nMatricula: ");
	scanf("%d", &matricula);
	
	while (matricula!=0){
		for (i=1; i<11; i++){
			printf("Nota %d: ", i);
			scanf("%f", &nota);
			media += nota;
		}
		media = media/10;
		printf("%d, media: %.1f", matricula, media);
		mediaturma+=media;
		media=0;
		n++;
		
		printf("\nMatricula: ");
		scanf("%d", &matricula);
	}
	
	mediaturma = mediaturma/n;
	printf("Media geral da turma: %.1f", mediaturma);
	
	return 0;
}
