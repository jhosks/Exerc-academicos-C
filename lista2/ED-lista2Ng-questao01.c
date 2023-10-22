#include <stdio.h>

/*
** Função : Ordem para obter o resultado da expressão 6/3-3*4%2.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 6/3-3*4%2;

    printf("Ordem para obter o resultado da expressao 6/3-3*4%2\n");
    printf("1 - Multiplicacao e Modulo: 3 *4 = 12 = 12% 2 = 0\n");
    printf("Expressao: 6 / 3 - 0\n");
    printf("Divisao: 6 / 3 = 2\n");
    printf("Subtracao: 2 - 0 = 2\n");

    printf("O resultado da expressao e: %f\n", resultado);

    return 0;
}
