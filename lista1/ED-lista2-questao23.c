#include <stdio.h>

/*
** Fun��o :  Fa�a um programa que leia o sal�rio de um funcion�rio. Calcule e imprima o valor do novo
sal�rio, sabendo que ele recebeu um aumento de 25%.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    double salario, aumento, novo_salario;

    printf("Digite seu sal�rio: ");
    scanf("%lf", &salario);

    printf("Voce recebeu um aumento de 25 por cento no seu salario.\n");

    aumento = salario * 25/100;

    novo_salario = salario + aumento;

    printf("Seu aumento sera de: %f\n", aumento);
    printf("Voce recebera agora: %f por mes\n", novo_salario);


    return 0;
}
