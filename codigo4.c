#include <stdio.h>
void main(){
 float base;
 printf ("digite valor da base");
 scanf ("%f", &base);
 float altura;
 printf ("digite valor da altura");
 scanf ("%f", &altura);
 float area;
  area=base*altura/2;
  printf("area do triangulo %.2f", area);  
}