#include <stdio.h>

/*
** Função :  Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações: As opções para fazer este código são mto grande, então fica só no código
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
