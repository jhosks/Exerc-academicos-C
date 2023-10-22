#include <stdio.h>

/*
** Função : Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("A temperatura %f º em Celsius para Fahrenheit é: %f", c, f);

    return 0;
}
