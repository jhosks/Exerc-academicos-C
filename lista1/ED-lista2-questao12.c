#include <stdio.h>

/*
** Fun��o : Leia uma temperatura em graus Celsius e apresente-a convertida em Kelvin.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float c, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    kelvin = c + 273.15;

    printf("Convertendo a temperatura %f em Celsius para Kelvin ficar�: %f", c, kelvin);

    return 0;

}
