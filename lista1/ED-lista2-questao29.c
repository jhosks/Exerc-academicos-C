#include <stdio.h>

/*
** Função : Faça um programa que use a equação de Torricelli para calcular a velocidade de um corpo
em relação ao espaço que ele percorre. A equação de Torriceli é a seguinte:
, sendo a velocidade final (em ), a velocidade inicial (em ), é a
aceleração (em ) e o espaço percorrido pelo corpo (em ). Use a função
da biblioteca para tirar a raiz quadrada, caso seja necessário.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float vIn, acele, espP;
    float vFin;

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%f", &vIn);

    printf("Digite a aceleracao (m/s^2): ");
    scanf("%f", &acele);

    printf("Digite o espaco percorrido (m): ");
    scanf("%f", &espP);

    vFin = sqrt(vIn * vFin + 2 * acele * espP);

    printf("A velocidade final do corpo e: %.2f m/s\n", vFin);

    return 0;
}
