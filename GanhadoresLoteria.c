#include <stdio.h>
int main (){

    int ValorPrêmio;
    int valorJ1 = 0,5;
    int valorJ2 = 0,35;
    int valorJ3 = 0,15;
    printf ("qual o valor do premio? \n");
    Scanf ("%d", &ValorPrêmio);
    printf ("cada jogador receberá respectivamente %d", ValorPrêmio * valorJ1, ValorPrêmio * valorJ2, ValorPrêmio * valorJ3);
    return 0;
}