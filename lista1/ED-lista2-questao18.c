#include <stdio.h>

/*
** Fun��o :  Leia um valor de comprimento em polegadas e apresente-o convertido em cent�metros
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float pol, cent;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &pol);

    cent = pol * 2.54;

    printf(" %f em polegadas para centimetros �: %f", pol, cent);

    return 0;
}
