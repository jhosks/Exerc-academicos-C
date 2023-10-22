#include <stdio.h>
#include <math.h>

/*
** Fun��o : Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere ( +, -, *, / ou ^), pede-se para imprimir o resultado da opera��o de A por B se C for um s�mbolo
de operador aritm�tico v�lido(tratar o s�mbolo); caso contr�rio deve ser impressa uma mensagem de operador n�o definido. Tratar erro de divis�o por zero. Mostrar impress�es complementares
explicando como funciona a calculadora.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    double a, b, resultado;
    char c;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);

    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    printf("Digite o valor de C (+, -, *, / ou ^): \n");
    scanf(" %c", &c); // O C � pra ignorar espa�os em brancos


    if(c == '+'){
        resultado = a + b;
        printf("Operacao: %.2lf + %.2lf = %.2lf\n", a, b, resultado);
    }
    else if(c == '-'){
        resultado = a - b;
        printf("Operacao: %.2lf - %.2lf = %.2lf\n", a, b, resultado);
    }
    else if(c == '*'){
        resultado = a * b;
        printf("Operacao: %.2lf * %.2lf = %.2lf\n", a, b, resultado);
    }
    else if(c == '/'){
        if(b !=0 ){
            resultado = a / b;
            printf("Operacao: %.2lf / %.2lf = %.2lf\n", a, b, resultado);
        }else{
            printf("Erro: Divisao por zero nao permitida.\n");
            return 1;
        }
    }
    else if(c == '^'){
        resultado = pow(a,b);
        printf("Operacao: %.2lf ^ %.2lf = %.2lf\n", a, b, resultado);
    }else{
        printf("Operador nao definido.\n");
        return 1;
    }

    return 0;
}
