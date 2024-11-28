#include <stdio.h>
int main (){
	int n1;
    int n2;
    int n3;
	printf ("Ola, amiguinho. Eu sou a fada dos numeros ao quadrado. Digite o seu numero e deixe comigo, que eu o elevo para voce.");
	scanf ("%d", &n1);
    printf ("precisa de mais um? tudo bem! Digita ele aqui pra mim queridinho.");
	scanf ("%d", &n2);
    printf ("Mais um!? voce esta me dando muito trabalho, eh tao divertido!!.");
	scanf ("%d", &n3);
	printf ("Aqui, prontinho, fiz o favor de somar todos so pra voce, nao va enfiar todos no cuzinho de uma vez \n");
    printf( "%d", n1 * n1 + n2 * n2 + n3 * n3);
	return 0;
}