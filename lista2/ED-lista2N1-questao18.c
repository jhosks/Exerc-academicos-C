#include <stdio.h>

/*
** Fun��o :  Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se for
divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: As op��es para fazer este c�digo s�o mto grande, ent�o fica s� no c�digo
*/

int main() {

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
