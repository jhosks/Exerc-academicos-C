#include <stdio.h>

/*
** Função : Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float c, f;

    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);

    c = (f -32)* 5/9;

    printf("A temperatura %f Fahrenheit para Celsius é: %f", f, c);


    return 0;

}

