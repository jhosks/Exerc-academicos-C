#include <stdio.h>

/*
** Função :Ler dois números inteiros e calcular quantos % maior um número é em relação a outro (ou
menor, se for o caso).
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
*/

int main() {

    int n1, n2;
    float diferenca, porcentagem;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    diferenca = n1 - n2;
    porcentagem = ((float)diferenca/n1)*100;


    printf("Um numero e %.2f%% %s em relacao ao outro.\n", porcentagem, (diferenca > 0) ? "maior" : "menor");

    return 0;
}
