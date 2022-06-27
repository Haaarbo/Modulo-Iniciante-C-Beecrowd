#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4, media, mediaFinal, notaExame;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (2*N1+3*N2+4*N3+1*N4)/10;

    printf("Media: %.1lf\n", media);

    if(media >= 7.0)
        printf("Aluno aprovado.\n");

    else if(media < 5)
        printf("Aluno reprovado.\n");

    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);
        mediaFinal = (notaExame+media)/2;
        if(mediaFinal >= 5)
            printf("Aluno aprovado.\n");

        else
            printf("Aluno reprovado.\n");
        
        
        printf("Media final: %.1lf\n", mediaFinal);
    }
 
    return 0;
}