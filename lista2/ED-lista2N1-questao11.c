#include <stdio.h>

/*
** Fun��o : Escreva um programa que receba 3 n�meros inteiros como entrada e imprima, como sa�da,
os n�meros em ordem crescente
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es:
*/

int main() {
    int n1, n2, n3, temp;


    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Os numeros em ordem crescente sao: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
