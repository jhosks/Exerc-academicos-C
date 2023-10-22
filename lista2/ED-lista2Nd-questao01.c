#include <stdio.h>

/*
** Função : Ordem para obter o resultado da expressão 7 > 2 && 3-5 <8.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    float resultado;

    resultado = 7 > 2 && 3-5 <8;

    printf("Ordem para obter o resultado da expressao 7 > 2 && 3-5 <8\n");
    printf("Expressao: 7 > 2 = true\n");
    printf("Expressao: 3-5 < 8 = -2< 8 = true\n");
    printf("Operador logico: true && true = true\n");
    printf("True = 1 | False = 0\n");

    printf("O resultado da expressao e: %f\n", resultado);

    return 0;
}
