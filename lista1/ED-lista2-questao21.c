#include <stdio.h>

/*
** Fun��o : Fa�a um programa que leia um valor de �rea em acres e apresente-o convertido em metros
quadrados .
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    double acres, quadrados;

    printf("Digite um valor em acres: ");
    scanf("%lf", &acres);

    quadrados = acres *  4047;

    printf("O valor da area em acres convertido em metros quadrados �: %f", quadrados);

    return 0;
}
