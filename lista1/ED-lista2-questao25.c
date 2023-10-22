#include <stdio.h>

/*
** Função : Faça um programa que leia as coordenadas X e Y de pontos no R2 e calcule sua distância
da origem (0,0).
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    double x, y, distancia;

    printf("Digite a coordenada X: ");
    scanf("%lf", &x);

    printf("Digite a coordenada Y: ");
    scanf("%lf", &y);

    distancia = (x * x + y * y);

    printf("A distancia do ponto (%.2lf, %.2lf) a origem e: %.2lf\n", x, y, distancia);

    return 0;
}
