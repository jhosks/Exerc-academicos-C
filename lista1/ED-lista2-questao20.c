#include <stdio.h>

/*
** . Faça um programa que leia um valor de área em metros quadrados e apresente-o
convertido em acres
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    double quadrado, acres;

    printf("Digite o valor da area em metros quadrados: ");
    scanf("%lf", &quadrado);

    acres = quadrado/4047;

    printf("%f em metros quadrados para acres: %f", quadrado, acres);

    return 0;
}
