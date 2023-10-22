#include <stdio.h>

/*
** Função :  Criar uma função que calcule a diferença entre duas horas distintas de um mesmo dia e
retorne o intervalo de tempo entre os dois horários (ler no formato hh:mm e imprimir
no formato hh:mm)
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    int h1, m1, h2, m2;
    int diferencaH, diferencaM;

    printf("Digite a primeira hora (hh:mm): ");
    scanf("%d:%d", &h1, &m1);

    printf("Digite a segunda hora (hh:mm): ");
    scanf("%d:%d", &h2,&m2);

    diferencaH = h2 - h1;
    diferencaM = m2 - m1;

    if(diferencaM < 0){
        diferencaH--;
        diferencaM +=60;
    }
    else if(diferencaH < 0){
        diferencaH += 24;
    }

    printf("A diferenca entre as duas horas e: %02d:%02d\n", diferencaH, diferencaM);


    return 0;
}
