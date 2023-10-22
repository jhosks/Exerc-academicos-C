#include <stdio.h>

/*
** Função : Ordem para obter o resultado da expressão 7%3-8+4/2.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 7%3-8+4/2;

    printf("Ordem para obter o resultado da expressao 7 % 3-8+4/2\n");
    printf("Operador Modulo (%): 7%3 = 1\n");
    printf("Expressao: 1-8+4/2\n");
    printf("Divisao: 4/2 = 2\n");
    printf("Expressao: 1-8+2\n");
    printf("Subtracao: -7\n");
    printf("Expressao: -7+2\n");
    printf("Adicao: -5\n");

    printf("O resultado da expressao e: %f\n", resultado);

    return 0;
}
