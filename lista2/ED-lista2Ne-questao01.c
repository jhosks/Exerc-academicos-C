#include <stdio.h>

/*
** Fun��o : Ordem para obter o resultado da express�o !(3 + 5! = 5/2-1).
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    int resultado;

    resultado = !(3+5!=5/2-1);

    printf("Ordem para obter o resultado da express�o !(3 + 5! = 5/2-1)\n");
    printf("1 - Fatorial 5! = 5 * 4 * 3 * 2 * 1 = 120\n");
    printf("2 - Parenteses: 3 + 120 = 123\n");
    printf("    5/2 = 2.5\n");
    printf("    2.5 - 1 = 1.5\n");
    printf("    Expressao: 123 = 1.5 = FALSE\n");
    printf("3 - Operador de negacao: !false\n");
    printf("TRUE = 1 | FALSE = 0\n");
    printf("O resultado �: %d\n", resultado);

    return 0;
}
