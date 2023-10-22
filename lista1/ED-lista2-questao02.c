#include <stdio.h>

/*
** Função : Converte velocidade em metros por segundo
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    float ms, velocidade;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    ms = velocidade/3.6;

    printf("A velocidade em m/s �: %g", ms);

    return 0;
}
