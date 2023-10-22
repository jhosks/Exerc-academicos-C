#include <stdio.h>

/*
** Fun��o : Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est� entre 1 e 12, e se
o dia existe naquele m�s. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos n�o bissextos
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: As op��es para fazer este c�digo s�o mto grande, ent�o fica s� no c�digo
*/

int main() {
    int d, m, a;
    int bis = 0;

    // Solicita ao usu�rio que insira a data
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

    // Verifica se o m�s est� entre 1 e 12
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
