#include <stdio.h>

/*
** Fun��o : Fa�a um programa que receba um numero inteiro e verifique se este numero � par ou
�mpar
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: As op��es para fazer este c�digo s�o mto grande, ent�o fica s� no c�digo
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
