#include <stdio.h>

/*
** Fun��o : Leia uma dist�ncia em quil�metros e apresente-a convertida em milhas
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float quilom, milhas;

    printf("Digite a dist�ncia em quil�metros: ");
    scanf("%f", &quilom);

    milhas = quilom/1.6;

    printf("%f quil�metros convertidos em milha: %f", quilom, milhas);

    return 0;
}
