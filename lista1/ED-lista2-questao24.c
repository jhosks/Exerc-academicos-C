#include <stdio.h>

/*
** Fun��o :  Fa�a um programa que leia um valor inteiro em segundos, e imprima-o em horas, minutos
e segundos
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observa��es:
*/

int main() {

    double num;
    double horas, minutos, segundos;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    segundos = num * 60;
    minutos = num / 60;
    horas = num / 3600;

    printf("%f em segundos �: %f\n", num, segundos);
    printf("%f em minutos �: %f\n", num, minutos);
    printf("%f em horas �: %f\n", num, horas);

    return 0;
}
