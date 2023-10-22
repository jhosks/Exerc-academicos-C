#include <stdio.h>

/*
** Função : Ordem para obter o resultado da expressão 10 > 11 && 11 < 12.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 10 > 11 && 11 < 12;

    printf("Ordem para obter o resultado da expressao 10 > 11 && 11 < 12\n");
    printf("1 - Expressao: 10 > 11 = false\n");
    printf("2 - Expressao: 11 < 12 = true\n");
    printf("Operador logico: false && true = true\n");
    printf("True = 1 | False = 0\n");

    printf("O resultado da expressao e: %f\n", resultado);

    return 0;
}
