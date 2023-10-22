#include <stdio.h>
#include <math.h>

/*
** Função : Dados três valores A, B e C, em que A e B são números reais e C é um caractere ( +, -, *, / ou ^), pede-se para imprimir o resultado da operação de A por B se C for um símbolo
de operador aritmético válido(tratar o símbolo); caso contrário deve ser impressa uma mensagem de operador não definido. Tratar erro de divisão por zero. Mostrar impressões complementares
explicando como funciona a calculadora.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observações:
*/

int main() {

    double a, b, resultado;
    char c;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);

    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    printf("Digite o valor de C (+, -, *, / ou ^): \n");
    scanf(" %c", &c); // O C é pra ignorar espaços em brancos


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
