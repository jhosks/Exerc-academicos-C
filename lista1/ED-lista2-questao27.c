#include <stdio.h>

/*
** Função : Criar um programa para calcular e imprimir o salário líquido de um (pobre) professor. Os
dados fornecidos serão: o valor da hora-aula, número de aulas dadas no mês e percentual
de desconto do INSS
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    double valor, aulas, inss, salario_semdesconto, salario_comdesconto;

    printf("Digite o valor da hora aula: ");
    scanf("%lf", &valor);

    printf("Quantas aulas voce da por mes?: ");
    scanf("%lf", &aulas);

    salario_semdesconto = valor * aulas;

    inss = salario_semdesconto * 0.12;

    salario_comdesconto = salario_semdesconto - inss;

    printf("O valor do seu salario sem descontar o INSS e: %lf\n", salario_semdesconto);
    printf("O desconto do INSS e: %f\n", inss);
    printf("O seu salario com desconto do INSS e: %lf", salario_comdesconto);



    return 0;
}
