#include <stdio.h>

/*
** Função : Indique a ordem e o resultado das expressões 2+3-5*8/4.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 2 + 3-5*8/4;

    printf("Ordem para obter o resultado da expressão 2 + 3 - 5 * 8 / 4 \n");
    printf("1 - Multiplicacao entre 5 * 8\n");
    printf("2 - Divisao entre o resultado da multiplicacao 40 / 4\n");
    printf("3 - Adicao 2 + 3\n");
    printf("4 - Subtracao 5 - 10\n");
    printf("O resultado é: %f\n", resultado);

    return 0;
}
