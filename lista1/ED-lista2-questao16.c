#include <stdio.h>

/*
** Fun��o : Leia um angulo em graus e apresente-o convertido em radianos
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float graus, rad;
    float pi = 3.14;

    printf("Digite o angulo: ");
    scanf("%f", &graus);

    rad = graus * pi/180;

    printf("%f graus em radianos �: %f", graus, rad);

    return 0;
}
