#include <stdio.h>

/*
** Fun��o : Leia um numero real e imprima a quinta parte deste numero.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float numero, resultado;

    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    resultado = numero / 5;

    printf("A quinta parte do n�mero �: %f\n", resultado);

    return 0;
}
