#include <stdio.h>

/*
** Fun��o :  Fa�a um programa que leia um valor de volume em metros c�bicos m� e apresente-o
convertido em litros.

** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float cub, lit;

    printf("Digite o valor em metros cubicos (M�): ");
    scanf("%f", &cub);

    lit = cub * 1000;

    printf("%f metro c�bico em litro �: %f", cub, lit);

    return 0;
}
