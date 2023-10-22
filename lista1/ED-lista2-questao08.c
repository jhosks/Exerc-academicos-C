#include <stdio.h>

/*
** Função : Leia um numero real e imprima a quinta parte deste numero.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float numero, resultado;

    printf("Digite um número: ");
    scanf("%f", &numero);

    resultado = numero / 5;

    printf("A quinta parte do número é: %f\n", resultado);

    return 0;
}
