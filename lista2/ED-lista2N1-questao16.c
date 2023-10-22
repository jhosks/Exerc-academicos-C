#include <stdio.h>

/*
** Fun��o : Escreva um programa para fazer convers�es entre diferentes unidades. As op��es do
programa devem ser exibidas em forma de um menu apresentado na tela, em dois n�veis.
No primeiro n�vel, o usu�rio escolhe a classe de unidade; no segundo n�vel o usu�rio
escolhe a convers�o que deseja, fornecendo ent�o, o valor a ser convertido. Por fim, o
programa exibe o valor resultante na tela.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es: As op��es para fazer este c�digo s�o mto grande, ent�o fica s� no c�digo
*/

int main() {
    int escolha;
    double original, convertido;

    printf("Escolha uma opcao de conversao:\n");
    printf("1. Libra para Quilograma\n");
    printf("2. Quilograma para Libra\n");
    printf("3. Onca para Grama\n");
    printf("4. Grama para Onca\n");
    printf("5. Galao para Litro\n");
    printf("6. Litro para Galao\n");
    printf("7. Onca para Mililitro\n");
    printf("8. Mililitro para Onca\n");
    printf("9. Milha para Quilometro\n");
    printf("10. Quilometro para Milha\n");
    printf("11. Jardas para Metro\n");
    printf("12. Metro para Jardas\n");

    printf("Digite o n�mero da op��o de conversso: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &original);

    switch (escolha) {
        case 1:
            convertido = original * 0.453592;
            printf("Valor convertido: %.2lf Quilogramas\n", convertido);
            break;
        case 2:
            convertido = original / 0.453592;
            printf("Valor convertido: %.2lf Libras\n", convertido);
            break;
        case 3:
            convertido = original * 28.3495;
            printf("Valor convertido: %.2lf Gramas\n", convertido);
            break;
        case 4:
            convertido = original / 28.3495;
            printf("Valor convertido: %.2lf Oncas\n", convertido);
            break;
        case 5:
            convertido = original * 3.78541;
            printf("Valor convertido: %.2lf Litros\n", convertido);
            break;
        case 6:
            convertido = original / 3.78541;
            printf("Valor convertido: %.2lf Galoes\n", convertido);
            break;
        case 7:
            convertido = original * 29.5735;
            printf("Valor convertido: %.2lf Mililitros\n", convertido);
            break;
        case 8:
            convertido = original / 29.5735;
            printf("Valor convertido: %.2lf Oncas\n", convertido);
            break;
        case 9:
            convertido = original * 1.60934;
            printf("Valor convertido: %.2lf Quilometros\n", convertido);
            break;
        case 10:
            convertido = original / 1.60934;
            printf("Valor convertido: %.2lf Milhas\n", convertido);
            break;
        case 11:
            convertido = original * 0.9144;
            printf("Valor convertido: %.2lf Metros\n", convertido);
            break;
        case 12:
            convertido = original / 0.9144;
            printf("Valor convertido: %.2lf Jardas\n", convertido);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
