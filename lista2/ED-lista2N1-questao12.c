#include <stdio.h>

/*
** Fun��o :Considere uma disciplina que adota o seguinte crit�rio de aprova��o: os alunos fazem duas
provas (P1 e P2) iniciais; se a m�dia das provas for maior ou igual a 5.0, e se nenhuma das
notas for inferior a 3.0, o aluno passa direto. Caso contr�rio, o aluno faz uma terceira prova
(P3) e a m�dia � calculada considera-se a terceira nota e a maior das notas entre P1 e P2.
Neste caso, o aluno � aprovado se a m�dia final for maior ou igual a 5.0 Escreva um
programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo
usu�rio via teclado. Se as notas n�o forem suficientes para o aluno passar direto, o
programa deve capturar a nota da terceira prova, tamb�m fornecida via teclado. Como
sa�da, o programa deve imprimir a m�dia final do aluno seguida da mensagem �Aprovado�
ou �Reprovado�, conforme o crit�rio descrito.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es:
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
