#include <stdio.h>

/*
** Fun��o : Leia um angulo em radianos e apresente-o convertido em graus
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    float rad, graus, pi = 3.14;

    printf("Digite um angulo em radianos: ");
    scanf("%f", &rad);

    graus = rad * 180/pi;

    printf("%f em radianos para graus �: %f", rad, graus);

    return 0;
}
