#include <stdio.h>

/*
** Fun��o : Ordem para obter o resultado da express�o 7 * 4/2 + 9-6.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    float resultado;

    resultado = 7 * 4 / 2 + 9 - 6;

    printf("Ordem para obter o resultado da express�o 7 * 4 / 2 + 9 - 6.");
    printf("1 - Multiplicacao 7 * 4 = 28 \n");
    printf("1 - Divisao 28 / 2 = 14\n");
    printf("1 - Soma 14 + 9 = 23\n");
    printf("1 - Subtracao 23 - 6 = 17\n");
    printf("O resultado �: %f", resultado);

    return 0;
}
