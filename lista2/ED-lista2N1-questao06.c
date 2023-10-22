#include <stdio.h>

/*
** Função : Elabora um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias: - Infantil A e B, Juvenil A e B, Senior >= 18 e senior < 25;
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 4 && idade <= 7){
        printf("Infantil A.\n");
    }
    else if(idade >= 8 && idade <= 9){
        printf("Infantil B.\n");
    }
    else if(idade >= 10 && idade <= 12){
        printf("Juvenil A.\n");
    }
    else if(idade >= 13 && idade <= 17){
        printf("Juvenil B.\n");
    }
    else if(idade >= 18 && idade <=25){
        printf("Senior.\n");
    }else if(idade < 4 && idade > 25){
        printf("Idade fora da faixa etaria!\n");
    }

    printf("Programa encerrado.\n");


    return 0;

}
