#include <stdio.h>

/*
** Função : calcula área de um triângulo
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    int base, altura, area;

    printf("Informe a base: ");
    scanf("%d", &base);

    printf("Informe a altura: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A �rea do tri�ngulo �: %d", area);


    return 0;
}
