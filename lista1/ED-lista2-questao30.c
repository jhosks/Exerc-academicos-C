#include <stdio.h>

/*
** Fun��o : Fa�a um programa para calcular a densidade de uma subst�ncia dados a massa e o volume
da mesma.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    double massa, volume, densidade;

    printf("Digite a massa: ");
    scanf("%lf", &massa);

    printf("Digite o volume: ");
    scanf("%lf",&volume);

    densidade = massa / volume;

    printf("A densidade de uma substancia e: %lf", densidade);

    return 0;
}
