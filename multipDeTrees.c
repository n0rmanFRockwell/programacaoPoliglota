#include <stdio.h>

int main(){
int numero = 31;
int contador = 0;

printf("3+3+3+3+3 \n");
while( contador < 5){
if (numero % 3 == 0){
    printf(" o numero %d eh multiplo de 3. \n", numero);
    contador = contador +1;
}
numero = numero + 1;
} 
  
    return 0;
}