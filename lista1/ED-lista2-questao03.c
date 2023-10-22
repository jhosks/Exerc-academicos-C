#include <stdio.h>

/*
** Função : Apresenta o dividendo, divisor, quociente e resto de cada número digitado.
** Autor : Jhoseffy victor alves felix
** Data : 19/09/2023
** Observações:
*/

int main() {

    int n1, n2, resto1, resto2;
    float dividendo1, divisor1, quociente1, resto1;
    float dividendo2, divisor2, quociente2, resto2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    dividendo1 = n1;
    divisor1 = n2;
    quociente1 = n1 / n2;
    resto1 = n1 % n2;

    dividendo2 = n2;
    divisor2 = n1;
    quociente2 = n2 / n1;
    resto2 = n2 % n1;

    printf("\nDividendo do primeiro pelo segundo: %f\n", dividendo1);
    printf("Divisor do primeiro pelo segundo: %f\n", divisor1);
    printf("Quociente do primeiro pelo segundo: %f\n", quociente1);
    printf("Resto do primeiro pelo segundo: %d\n", resto1);

    printf("\nDividendo do segundo pelo primeiro: %f\n", dividendo2);
    printf("Divisor do segundo pelo primeiro: %f\n", divisor2);
    printf("Quociente do segundo pelo primeiro: %f\n", quociente2);
    printf("Resto do segundo pelo primeiro: %d\n", resto2);


   return 0;

}
