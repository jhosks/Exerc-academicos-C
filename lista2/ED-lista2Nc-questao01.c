#include <stdio.h>

/*
** Fun��o : Ordem para obter o resultado da express�o (4/2)/0.5*(4%2)*0.5.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    float resultado;

    resultado = (4/2)/0.5*(4%2)*0.5;

    printf("Ordem para obter o resultado da express�o (4/2)/0.5*(4%2)*0.5 \n");
    printf("1 - Parenteses 4/2 e 4%2 = 2 e 0 \n");
    printf("Agora a expressao se torna: 2 / 0.5 * 0 * 0.5\n");
    printf("2 - Multiplicacao e Divisao (da esquerda para a direita)");
    printf(" 2 / 0.5  = 4\n");
    printf("4 * 0 = 0 \n");
    printf("0 * 0.5 = 0\n");
    printf("O resultado �: %f \n", resultado);

    return 0;
}
