#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** Fun��o :Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. Neste
jogo, o usu�rio e o computador escolhem entre pedra, papel ou tesoura. Sabendo que a
pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel, exiba na tela o
ganhador: usu�rio ou computador. Para esta implementa��o use n�meros aleat�rios e
assuma que o n�mero 0 representa pedra, 1 representa papel e 2 representa tesoura.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: Eu olhei todo o c�digo pra gerar n�meros aleat�rios pelo BB, mas n�o entendi. Ent�o eu pesquisei para entender
de forma resumida. passo a passo e sem ser aquele tanto de p�gina.
*/

int main() {
    srand(time(NULL));

    int usuario, computador;

    printf("Escolha uma opcao:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");

    printf("Digite sua escolha: ");
    scanf("%d", &usuario);

    computador = rand() % 3;

    switch (computador) {
        case 0:
            printf("O computador escolheu Pedra.\n");
            break;
        case 1:
            printf("O computador escolheu Papel.\n");
            break;
        case 2:
            printf("O computador escolheu Tesoura.\n");
            break;
    }

    if (usuario == computador) {
        printf("Empate!\n");
    } else if ((usuario == 0 && computador == 2) ||
               (usuario == 1 && computador == 0) ||
               (usuario == 2 && computador == 1)) {
        printf("PaVoce ganhou!!\n");
    } else {
        printf("O computador ganhou. Jogue novamente.\n");
    }
     return 0;
}
