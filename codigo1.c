#include <stdio.h>



void main(){
    float dolar;
    printf("digite o valor em dolar.");
    scanf ("%f",&dolar);
    float cotacao;
    printf("digite a cotacao");
    scanf("%f", &cotacao);
    float real;
    real=cotacao*dolar;
    printf ("valor em real %.2f",real);
}