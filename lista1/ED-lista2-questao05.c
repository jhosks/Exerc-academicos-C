#include <stdio.h>

/*
** Função : Converter no valor digitado em real, em dolar
** Autor : Jhoseffy Victor Alves Felix
** Data : 19/09/2023
** Observações:
*/


int main() {

    float real, dolar;

    printf("Digite o valor em real: ");
    scanf("%f", &real);

    dolar = real * 4.95;

    printf("Convertendo %.1f reais em dolar ficar�: %.1f", real, dolar);


   return 0;
}
