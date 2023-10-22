#include <stdio.h>

/*
** Função :  Leia uma distância em milhas e apresente-a convertida em quilômetros
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float milhas, quilom;

    printf("Digite a distância em milhas: ");
    scanf("%f", &milhas);

    quilom = milhas * 1.609;

    printf("A distância de %f milhas em quilômetros é: %f", milhas, quilom);

    return 0;

}
