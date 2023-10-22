#include <stdio.h>

/*
** Função : Recebe 3 valores e dá a soma deles..
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    int v1, v2, v3, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

     printf("Digite o segundo valor: ");
    scanf("%d", &v2);

     printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    soma = v1+v2+v3;

      printf("A media total: %d\n", soma);
     return 0;
}
