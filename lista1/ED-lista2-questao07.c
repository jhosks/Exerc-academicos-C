#include <stdio.h>

/*
** Fun��o : Recebe um n�mero e imprime o quadrado dele e o cubo.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float numero, quadrado, cubo;

    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    cubo = numero * numero * numero;

    printf("O quadrado do n�mero digitado �: %f\n", quadrado);

    printf("O cubo do n�mero digitado �: %f\n", cubo);

    return 0;
}
