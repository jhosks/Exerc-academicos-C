#include <stdio.h>

/*
** Função :  Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora)
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float velocidade, kmh;

    printf("Digite a velocidade em metros por segundo   : ");
    scanf("%f", &velocidade);

    kmh = velocidade * 3.6;

    printf("A velocidade %f em KM/H é: %f", velocidade, kmh);

    return 0;

}
