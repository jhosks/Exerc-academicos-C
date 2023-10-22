#include <stdio.h>

/*
** Função :  Considere as equações de movimento para calcular a posição ( s ) e a velocidade ( v ) de
uma partícula em determinado instante t , dado sua aceleração a , posição inicial e
velocidade inicial , de acordo com as fórmulas: s = s0 + v0t + at²/2 e v = v0 + at
Escreva um programa completo que capture os valores de s0 ,v0 , a e t , fornecidos via
teclado, e calcule e exiba os valore de e . Todos os valores tratados no programa devem
ser reais.
** Autor : Jhoseffy victor alves felix
** Data : 29/09/2023
** Observações:
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
