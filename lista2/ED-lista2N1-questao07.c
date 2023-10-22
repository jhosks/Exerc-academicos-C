#include <stdio.h>

/*
** Fun��o : Escrever um algoritmo que l� o n�mero de identifica��o, as 03 notas obtidas por um aluno nas 03 provas. Calcule a m�dias das provas que fazem parte da avalia��o (ME) e calcular
(exibir) a m�dia de aproveitamento, usando a f�rmula: M A = nota 1+ nota + x 2 + nota 3 x3 + ME/7. A atribui��o de conceito obedece a tabela.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    int alun;
    float n1, n2, n3, me, ma;
    char conceito;

    printf("Digite o numero do aluno: ");
    scanf("%d", &alun);

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    me = (n1 + n2+ n3)/3;

    ma = (n1 + n2 * 2 + n3 *3 + me)/7;

    if(ma == 9.0){
        conceito = 'A';
    }
    else if(ma >= 7.5 && ma < 9.0){
         conceito = 'B';
    }
    else if(ma >= 6.0 && ma < 7.5){
         conceito = 'C';
    }
    else if(ma >= 4.0 && ma < 6.0){
         conceito = 'D';
    }
    else if(ma < 4.0){
         conceito = 'E';
    }

    printf("O numero do aluno e: %d\n", alun);
    printf("As notas nas 3 provas foram: %f, %f, %f\n", n1, n2, n3);
    printf("A Media das provas e: %f\n", me);
    printf("A Media de aproveitamento (MA) e: %f\n", ma);

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }

    return 0;

}
