#include <stdio.h>

/*
** Função : Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se
o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações: As opções para fazer este código são mto grande, então fica só no código
*/

int main() {
    int d, m, a;
    int bis = 0;

    // Solicita ao usuário que insira a data
    printf("Digite o dia: ");
    scanf("%d", &d);

    printf("Digite o mes: ");
    scanf("%d", &m);

    printf("Digite o ano: ");
    scanf("%d", &a);

    // Verifica se o ano e bissexto
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        bis = 1;
    }

    // Verifica se o mês está entre 1 e 12
    if (m < 1 || m > 12) {
        printf("Data invalida: mes fora do intervalo.\n");
    }
    else if ((m == 2 && ((bis && d > 29) || (!bis && d > 28))) ||
             ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) ||
             (d > 31)) {
        printf("Data invalida: dia fora do intervalo para o mes.\n");
    } else {
        printf("Data valida.\n");
    }

    return 0;
}
