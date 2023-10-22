#include <stdio.h>

/*
** Função :A granja “Frangos Gauss” possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé
esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
que o anel com chip custa R$ 3,00 e o anel de alimento custa R$ 2,50, faça um algoritmo
para calcular o gasto total da granja para marcar todos os seus frangos. (a quantidade de
frangos deve ser lida pelo usuário – valide a quantidade, ou seja, não pode ser zero nem
negativa)
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
*/

int main() {

    int anelC, anelA, total;
    float qAnelA, qAnelC, gastoTotal;


    do {
    printf("Bem-Vindo a Granja Frangos Gauss!\n");
    printf("Digite a quantidade de frangos que tem ANEL com CHIP: \n");
    scanf("%d", &anelC);

    printf("Digite a quantidade de frangos que tem ANEL de ALIMENTO: \n");
    scanf("%d", &anelA);

        if(anelA <= 0 && anelC <= 0){
            printf("A quantidade de frango deve ser maior que zero. Tente novamente.\n");
        }

    }while (anelA <= 0 && anelC <= 0);

    qAnelC = anelC * 3.00;
    qAnelA = (anelA * 2.50)*2;

    total = anelA + anelC;
    gastoTotal = qAnelA + qAnelC;



    printf("A quantidade de frangos que usam o ANEL com CHIP e: %d\n", anelC);
    printf("A quantidade de frangos que usam o ANEL de ALIMENTO e: %d\n", anelA);
    printf("A quantidade de frangos na granja e: %d\n", total);
    printf("_______________________________________________________________________\n");
    printf("Gasto total para marcar os frangos que utilizam ANEL com CHIP: %f\n", qAnelC);
    printf("Gasto total para marcar os frangos que utilizam ANEL de ALIMENTO: %f\n", qAnelA);
    printf("O gasto total sera: %f", gastoTotal);



    return 0;

}
