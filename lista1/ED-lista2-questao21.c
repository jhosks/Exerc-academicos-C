#include <stdio.h>

/*
** Função : Faça um programa que leia um valor de área em acres e apresente-o convertido em metros
quadrados .
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    double acres, quadrados;

    printf("Digite um valor em acres: ");
    scanf("%lf", &acres);

    quadrados = acres *  4047;

    printf("O valor da area em acres convertido em metros quadrados é: %f", quadrados);

    return 0;
}
