#include <stdio.h>

/*
** Fun��o : Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("A temperatura %f � em Celsius para Fahrenheit �: %f", c, f);

    return 0;
}
