#include <stdio.h>

/*
** Função :Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas
provas (P1 e P2) iniciais; se a média das provas for maior ou igual a 5.0, e se nenhuma das
notas for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira prova
(P3) e a média é calculada considera-se a terceira nota e a maior das notas entre P1 e P2.
Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0 Escreva um
programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo
usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o
programa deve capturar a nota da terceira prova, também fornecida via teclado. Como
saída, o programa deve imprimir a média final do aluno seguida da mensagem “Aprovado”
ou “Reprovado”, conforme o critério descrito.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
*/

int main() {

    float n1, n2, n3, media;
    float maiorNota;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    if(media >= 5.0 && n1 >= 3.0 && n2 >= 3.0){
        printf("Media final: %.2f\n", media);
        printf("Aprovado!\n");
    }else{
        printf("Digite a nota da terceira prova (P3): ");
        scanf("%f", &n3)

        maiorNota = (n1 > n2)? n1 : n2;

        media == (maiorNota + n3)/2;

        if(media >= 5.0){
            printf("Media final: %.2f\n", media);
            printf("Aprovado!\n");
        }else{
            printf("Media final: %.2f\n", media);
            printf("Reprovado!\n");
        }
    }

    return 0;
}
