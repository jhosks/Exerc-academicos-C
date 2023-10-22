#include <stdio.h>

/*
** Função : Recebe um número e imprime o quadrado dele e o cubo.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float numero, quadrado, cubo;

    printf("Digite um número: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    cubo = numero * numero * numero;

    printf("O quadrado do número digitado é: %f\n", quadrado);

    printf("O cubo do número digitado é: %f\n", cubo);

    return 0;
}
