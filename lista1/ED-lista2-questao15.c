#include <stdio.h>

/*
** Função : Leia uma distância em quilômetros e apresente-a convertida em milhas
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float quilom, milhas;

    printf("Digite a distância em quilômetros: ");
    scanf("%f", &quilom);

    milhas = quilom/1.6;

    printf("%f quilômetros convertidos em milha: %f", quilom, milhas);

    return 0;
}
