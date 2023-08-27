//Fazer um programa que simule um campeonato com 4 times (A, B, C e D). Sera pedido o nome do
//primeiro time com os gols marcados e o nome do segundo time com os gols marcados. Este processo
//se repetir´a at´e que seja informado um valor diferente de A, B, C ou D para o primeiro time. Ao final
//dever´a ser apresentado o n´umero de pontos de cada time e o campe˜ao. Caso houve empate na primeira
//coloca¸c˜ao informar que n˜ao houve campe˜ao. Calculo dos pontos: vit´oria 3 pontos, empate 1 ponto e
//derrota 0 ponto.

#include <stdio.h>
#include <string.h>

int main() {
    int gol1 = 0, gol2 = 0, pontA = 0, pontB = 0, pontC = 0, pontD = 0;
    char time1[2], time2[2], nomeCampeao = 'A';
    int empate = 0;

    while (1) {
        printf("Time: ");
        scanf("%s", time1);

        if ((strcmp(time1, "A") != 0) && (strcmp(time1, "B") != 0) && (strcmp(time1, "C") != 0) && (strcmp(time1, "D") != 0)) {
            break;
        }

        printf("Gols: ");
        scanf("%d", &gol1);

        printf("Time: ");
        scanf("%s", time2);
        printf("Gols: ");
        scanf("%d", &gol2);

        if (gol1 > gol2) {
            if (strcmp(time1, "A") == 0) {
                pontA += 3;
            } else if (strcmp(time1, "B") == 0) {
                pontB += 3;
            } else if (strcmp(time1, "C") == 0) {
                pontC += 3;
            } else if (strcmp(time1, "D") == 0) {
                pontD += 3;
            }
        } else if (gol2 > gol1) {
            if (strcmp(time2, "A") == 0) {
                pontA += 3;
            } else if (strcmp(time2, "B") == 0) {
                pontB += 3;
            } else if (strcmp(time2, "C") == 0) {
                pontC += 3;
            } else if (strcmp(time2, "D") == 0) {
                pontD += 3;
            }
        } else {
            if (strcmp(time1, "A") == 0) {
                pontA += 1;
            } else if (strcmp(time1, "B") == 0) {
                pontB += 1;
            } else if (strcmp(time1, "C") == 0) {
                pontC += 1;
            } else if (strcmp(time1, "D") == 0) {
                pontD += 1;
            }
            if (strcmp(time2, "A") == 0) {
                pontA += 1;
            } else if (strcmp(time2, "B") == 0) {
                pontB += 1;
            } else if (strcmp(time2, "C") == 0) {
                pontC += 1;
            } else if (strcmp(time2, "D") == 0) {
                pontD += 1;
            }
        }
    }

    if (pontB >= pontA && pontB >= pontC && pontB >= pontD) {
        nomeCampeao = 'B';
        if (pontB == pontA || pontB == pontC || pontB == pontD) {
            empate = 1;
        }
    } else if (pontC >= pontA && pontC >= pontB && pontC >= pontD) {
        nomeCampeao = 'C';
        if (pontC == pontA || pontC == pontB || pontC == pontD) {
            empate = 1;
        }
    } else if (pontD >= pontA && pontD >= pontB && pontD >= pontC) {
        nomeCampeao = 'D';
        if (pontD == pontA || pontD == pontB || pontD == pontC) {
            empate = 1;
        }
    } else {
        if (pontA == pontB || pontA == pontC || pontA == pontD) {
            empate = 1;
        }
    }

    if (empate) {
        printf("Nao houve campeao.\n");
    } else {
        printf("Campeao: %c\n", nomeCampeao);
    }
    printf("A: %d \nB: %d\nC: %d\nD: %d\n", pontA, pontB, pontC, pontD);

    return 0;
}

