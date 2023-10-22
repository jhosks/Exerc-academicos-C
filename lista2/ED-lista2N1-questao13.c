#include <stdio.h>
#include <math.h>

/*
** Fun��o :3. Escreva um programa que converta as coordenadas polares (raio r e �ngulo a) em
coordenadas cartesianas (abscissa x e ordenada y), e acordo com as f�rmulas: x = r x cos(a) ... y = r x sin(a)
OBS: Use as fun��es sin e cos da biblioteca matem�tica math.h . Considere r como o
raio.

** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es:
*/

int main() {

    double raio, angulo, x, y;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Digite o �ngulo em radianos: ");
    scanf("%lf", &angulo);

    x = raio * cos(angulo);
    y = raio * sin(angulo);


    printf("Coordenadas cartesianas (x, y): (%lf, %lf)\n", x, y);

    return 0;
}
