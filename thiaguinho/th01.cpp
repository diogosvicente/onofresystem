#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, nota5, media;

    printf("primeira nota:");
    scanf("%f", &nota1);
    printf ("segunda nota:");
    scanf("%f", &nota2);
    printf("terceira nota:");
    scanf("%f", &nota3);
    printf("quarta nota:");
    scanf("%f", &nota4);
    printf("quinta nota:");
    scanf("%f", &nota5);
    media= (nota1+nota2+nota3+nota4+nota5) / 5;
    printf("a nota dos aluno sera %.2f\n", media);

    system("pause");
    
    return 0;
}
