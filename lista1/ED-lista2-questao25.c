#include <stdio.h>

/*
** Fun��o : Fa�a um programa que leia as coordenadas X e Y de pontos no R2 e calcule sua dist�ncia
da origem (0,0).
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
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
