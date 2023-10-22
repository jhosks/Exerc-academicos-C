#include <stdio.h>

/*
** Função : Recebe 5 valores e dá a média.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    int media, v1, v2, v3, v4, v5;


    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    printf("Digite o quarto valor: ");
    scanf("%d", &v4);

    printf("Digite o quinto valor: ");
    scanf("%d", &v5);

    media = (v1 + v2 + v3 + v4 + v5)/5;

    printf("A media total: %d\n", media);

   return 0;
}
