#include <stdio.h>
void main(){
  float salariob;
  printf ("digite salario bruto");
  scanf("%f",&salariob);
  float previdencia;
  previdencia=0.9; 
 float salarioL;
  salarioL=salariob*previdencia;
  printf ("salario bruto %.2f",salariob);
  printf ("salario liquido %.2f",salarioL);  
}