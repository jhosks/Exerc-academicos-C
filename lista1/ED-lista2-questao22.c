#include <stdio.h>

/*
** Fun��o : Fa�a um programa que leia a altura e o raio de um cilindro circular e imprima o volume do
cilindro


** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    double raio, altura, vc;
    double pi = 3.14159, area;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    area = pi*(raio * raio);
    printf("Area de superficie do topo do cilindro: %f\n", area);

    vc = area*pi*altura;
    printf("O volume do cilidro �: %f m�\n", vc);

    return 0;
}
