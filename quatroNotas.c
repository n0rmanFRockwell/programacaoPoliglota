#include <stdio.h>
int main(){
    float nota1;
    float notaDongwa;
    float nota3;
    float nota4;
    printf ("digite a nota do aluno Adriel.");
    scanf ("%f", &nota1);
    printf ("digite a nota do aluno Dongwa.");
    scanf ("%f", &notaDongwa);
    printf ("digite a nota do aluno Felipe.");
    scanf ("%f", &nota3);
    printf ("digite a nota do aluno Rodrigo.");
    scanf ("%f", &nota4);
    notaDongwa = 10;
    printf ("O dongwa eh nota 10 e a media dos alunos eh \n");
    printf ("%f", (nota1 + notaDongwa + nota3 + nota4) / 4 );
    
    return 0;
}