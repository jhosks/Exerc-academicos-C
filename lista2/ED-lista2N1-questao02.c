#include <stdio.h>

/*
** Função : Elaborar programa que lê os coeficientes a, b e c de uma equação do segundo grau e, antes de calcular as raizes, calcular o delta. Se este for negativo, informe que
a equação não tem solução real. Se for zero, mostra a única raiz. Se positivo, mostra as duas raízes.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    double a, b, c, delta, x1, x2;

    printf("Digite qual sera o coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite qual sera o coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite qual sera o coeficiente b: ");
    scanf("%lf", &c);

    delta = (b * b)- 4 * a * c;

    if(delta < 0){
        printf("A equacao nao possui solucoes reais.");
    }
    else if(delta == 0){
        x1 = -b / (2*a);
        printf("A equacao possui uma unica raiz real x = %.2lf", x1);
    }
    else{
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
    }

    return 0;
}
