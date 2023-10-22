#include <stdio.h>

/*
** Função :  Faça um programa que leia um valor de volume em metros cúbicos m³ e apresente-o
convertido em litros.

** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float cub, lit;

    printf("Digite o valor em metros cubicos (M³): ");
    scanf("%f", &cub);

    lit = cub * 1000;

    printf("%f metro cúbico em litro é: %f", cub, lit);

    return 0;
}
