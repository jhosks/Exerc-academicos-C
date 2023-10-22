#include <stdio.h>

/*
** Função : Ordem para obter o resultado da expressão 9 / 3 + 9 % 3 + 9 * 3.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 9 / 3 + 9 % 3 + 9 * 3;

    printf("Ordem para obter o resultado da expressao 9 / 3 + 9 % 3 + 9 * 3\n");
    printf("1 - Modulo: 9 % 3 = 0\n");
    printf("Expressao: 9 / 3 + 0 + 9 * 3\n");
    printf("2 - Divisao: 9 / 3 = 3\n");
    printf("Expressao: 3 + 0 + 9 * 3\n");
    printf("3 - Multiplicacao: 9 * 3 = 27\n");
    printf("Expressao: 3 + 0 + 27\n");
    printf("4 - Adicao: 3 + 27 = 30\n");

    printf("O resultado da expressao e: %f\n", resultado);

    return 0;
}
