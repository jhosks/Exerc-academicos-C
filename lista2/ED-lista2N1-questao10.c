#include <stdio.h>

/*
** Função : . Escreva um programa que receba três números inteiros como entrada e imprima, como
saída, o maior número recebido
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
*/

int main() {
    int n1, n2, n3, maior;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    maior = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("O maior numero e: %d\n", maior);

    return 0;
}
