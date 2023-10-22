#include <stdio.h>

/*
** Função : Faça um programa que receba um numero inteiro e verifique se este numero é par ou
ímpar
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações: As opções para fazer este código são mto grande, então fica só no código
*/

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if( num % 2 == 0){
        printf("PAR!");
    }else{
        printf("IMPAR!");
    }

    return 0;
}
