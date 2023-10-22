#include <stdio.h>

/*
** Função : Escreva um programa que leia três valores inteiros e verifique se eles podem ser os lados de um triângulo. Se forem, informar qual o tipo de triângulo que eles formam: Equilátero,
isóscele ou escaleno. Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos do soutros dois lados. Triângulo Equilátero: aquele que tem os comprimentos dos três lados iguais;
Triângulo isóscele: aquele que tem os comprimentos de dois lados iguais. Portanto, todo triângulo equilátero é também isóscele; Triângulo Escaleno: aquele que tem os comprimentos de seus t^res lados diferentes.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    int l1, l2, l3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &l1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &l2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &l3);

    if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        if (l1 == l2 && l2 == l3){
            printf("Triangulo Equilatero\n");
            printf("O Triangulo Equilatero possuio os 3 lados iguais, ou seja, os 3 lados digitado sao os mesmos.\n");
        }else if(l1 == l2 || l1 == l3 || l2 == l3){
            printf("Triangulo Isosceles.\n");
            printf("O Triangulo Isosceles possui somente 2 lados iguais, ou seja, dois lados digitado sao os mesmos, e o outro unico.\n");
        }else{
            printf("Triangulo Escaleno.\n");
            printf("O Triangulo Escaleno possui os 3 lados diferentes, ou seja, os 3 lados digitados nao tem semelhanca.\n");
        }
    }else{
        printf("Os valores digitados nao formam um triangulo.\n");
    }

    printf("Programa encerrado.\n");

    return 0;

}
