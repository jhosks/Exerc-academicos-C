#include <stdio.h>

/*
** Fun��o :  Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float milhas, quilom;

    printf("Digite a dist�ncia em milhas: ");
    scanf("%f", &milhas);

    quilom = milhas * 1.609;

    printf("A dist�ncia de %f milhas em quil�metros �: %f", milhas, quilom);

    return 0;

}
