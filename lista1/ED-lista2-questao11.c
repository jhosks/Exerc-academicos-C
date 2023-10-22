#include <stdio.h>

/*
** Função :  Leia uma temperatura em Kelvin e apresente-a convertida em graus Celsius
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float kelvin, f;

    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &kelvin);

    f = (kelvin - 273.15)* 9/5 + 32;

    printf("A temperatura %f em Kelvin para Fahrenheit é: %f", kelvin, f);

    return 0;
}
