#include <stdio.h>
#include <math.h>

/*
** Função :3. Escreva um programa que converta as coordenadas polares (raio r e ângulo a) em
coordenadas cartesianas (abscissa x e ordenada y), e acordo com as fórmulas: x = r x cos(a) ... y = r x sin(a)
OBS: Use as funções sin e cos da biblioteca matemática math.h . Considere r como o
raio.

** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
*/

int main() {

    double raio, angulo, x, y;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &angulo);

    x = raio * cos(angulo);
    y = raio * sin(angulo);


    printf("Coordenadas cartesianas (x, y): (%lf, %lf)\n", x, y);

    return 0;
}
