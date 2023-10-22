#include <stdio.h>

/*
** Fun��o: Crie uma aplica��o para calcular o IMC (�ndice de Massa Corporal) que leia o peso do usu�rio em quilogramas e a latura em metros e que depois calcule e apresente o IMC segundo a f�rmula
IMC =  PesoEmQuilos/AlturaEmMetros�. Al�m disso, o programa dever� exibir as informa��es seguintes do Minist�rio da Sa�de para que a pessoa possa valiar seu IMC.
** Autor : Jhoseffy victor alves felix
** Data : 28/09/2023
** Observa��es:
*/

int main() {

    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5){
        printf("Resultado do seu IMC: %f", imc);
        printf("Abaixo do peso.");
    }
    else if( imc >= 18.5 && imc < 24.9){
        printf("Resultado do seu IMC: %f\n", imc);
        printf("Peso normal.\n");
    }
    else if(imc >= 25.0 && imc < 29.9){
        printf("Resultado do seu IMC: %f\n", imc);
        printf("Sobrepeso.\n");
    }
    else if(imc >= 30.0 && imc < 34.9){
        printf("Resultado do seu IMC: %f\n", imc);
        printf("Obesidade grau 1.\n");
    }
    else if( imc >= 35.0 && imc < 39.9){
        printf("Resultado do seu IMC: %f\n", imc);
        printf("Obesidade grau 2.\n");
    }
    else if(imc > 40){
        printf("Resultado do seu IMC: %f\n", imc);
        printf("Obesidade grau 3.\n");
    }

    printf("Programa finalizado.\n");

    return 0;
}
