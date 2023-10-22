#include <stdio.h>

/*
** Fun��o :  Considere as equa��es de movimento para calcular a posi��o ( s ) e a velocidade ( v ) de
uma part�cula em determinado instante t , dado sua acelera��o a , posi��o inicial e
velocidade inicial , de acordo com as f�rmulas: s = s0 + v0t + at�/2 e v = v0 + at
Escreva um programa completo que capture os valores de s0 ,v0 , a e t , fornecidos via
teclado, e calcule e exiba os valore de e . Todos os valores tratados no programa devem
ser reais.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observa��es:
*/

int main() {
    double s0, v0, a, t, p, vel;

    printf("Digite a posicao (s0): ");
    scanf("%lf", &s0);

    printf("Digite a velocidade (v0): ");
    scanf("%lf", &v0);

    printf("Digite a aceleracao (a): ");
    scanf("%lf", &a);

    printf("Digite o instante de tempo (t): ");
    scanf("%lf", &t);

    p = s0 + v0 * t + (a * t * t) / 2.0;

    vel = v0 + a * t;

    printf("A posicao (s) no instante t e: %.2lf\n", p);
    printf("A velocidade (v) no instante t e: %.2lf\n", vel);

    return 0;
}
