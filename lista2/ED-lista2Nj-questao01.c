#include <stdio.h>

/*
** Fun��o : Ordem para obter o resultado da express�o 1 + 2 + 3/2.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es: O 3 n�o est� divindo em 2.
*/

int main() {

    double resultado;

    resultado = 1+2+3/2;

    printf("Ordem para obter o resultado da expressao 1 + 2 + 3/2\n");
    printf("1 - Divisao: 3 / 2 = 1.5 \n");
    printf("Expressao: 1 + 2 + 1.5\n");
    printf("2 - Adicao:1 + 2 = 3\n");
    printf("Expressao: 3 + 1.5\n");
    printf("3 - Adicao continua e resultado: 4.5\n");

    printf("O resultado da expressao e: %lf\n", resultado);

    return 0;
}
