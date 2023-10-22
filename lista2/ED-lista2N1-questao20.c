#include <stdio.h>

/*
** Fun��o : Crie um programa que converta uma temperatura em Celsius para Fahrenheit ou vice-versa,
dependendo da escolha do usu�rio.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: As op��es para fazer este c�digo s�o mto grande, ent�o fica s� no c�digo
*/

int main() {
    int opcao;
    double temperatura, resultado;

    printf("Escolha a opcao:\n");
    printf("1. Converter de Celsius para Fahrenheit\n");
    printf("2. Converter de Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    switch (opcao) {
        case 1:
            resultado = (temperatura * 9.0 / 5.0) + 32.0;
            printf("%.2lf Celsius equivale a %.2lf Fahrenheit\n", temperatura, resultado);
            break;
        case 2:
            resultado = (temperatura - 32.0) * 5.0 / 9.0;
            printf("%.2lf Fahrenheit equivale a %.2lf Celsius\n", temperatura, resultado);
            break;
        default:
            printf("Op��o invalida.\n");
            return 1;
    }

    return 0;
}
