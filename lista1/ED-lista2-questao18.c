#include <stdio.h>

/*
** Função :  Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float pol, cent;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &pol);

    cent = pol * 2.54;

    printf(" %f em polegadas para centimetros é: %f", pol, cent);

    return 0;
}
