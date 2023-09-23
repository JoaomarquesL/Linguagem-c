#include <stdlib.h>
#include <stdio.h>

/*Calculadora Simples: 
Crie um programa em C que funcione como uma calculadora simples. 
Ele deve ser capaz de realizar operações de adição, subtração, multiplicação e divisão. 
O programa deve solicitar ao usuário que insira a operação desejada e dois números.*/

int main(){
    int op;
    float num1, num2;
    float sub, adi, div, mult;

    printf("digite a sua opcao de operacao desejada:\n1-subtracao\n2-adicao\n3-divisao\n4-multiplicacao\n");
    scanf("%i", &op);

    if(op == 1){
        printf("digite o primeiro numero:\n");
        scanf("%f", &num1);
        printf("digite o segundo numero:\n");
        scanf("%f", &num2);

        sub = num1 - num2;

        printf("subtracao do numero digitado: %.2f", sub);
    }
    else if(op == 2){
        printf("digite o primeiro numero:\n");
        scanf("%f", &num1);
        printf("digite o segundo numero:\n");
        scanf("%f", &num2);

        adi = num1 + num2;

        printf("adicao do numero digitado: %.2f", adi);
    }
    else if(op == 3){
        printf("digite o primeiro numero:\n");
        scanf("%f", &num1);
        printf("digite o segundo numero:\n");
        scanf("%f", &num2);

        div = num1 / num2;

        printf("divisao do numero digitado: %.2f", div);
    }
    else if(op == 4){
        printf("digite o primeiro numero:\n");
        scanf("%f", &num1);
        printf("digite o segundo numero:\n");
        scanf("%f", &num2);

        mult = num1 * num2;

        printf("multiplicacao do numero digitado: %.2f", mult);
    }
    else{
        printf("O numero digitado esta errado");
    }
}