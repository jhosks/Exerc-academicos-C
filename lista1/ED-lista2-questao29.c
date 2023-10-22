#include <stdio.h>

/*
** Fun��o : Fa�a um programa que use a equa��o de Torricelli para calcular a velocidade de um corpo
em rela��o ao espa�o que ele percorre. A equa��o de Torriceli � a seguinte:
, sendo a velocidade final (em ), a velocidade inicial (em ), � a
acelera��o (em ) e o espa�o percorrido pelo corpo (em ). Use a fun��o
da biblioteca para tirar a raiz quadrada, caso seja necess�rio.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
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
