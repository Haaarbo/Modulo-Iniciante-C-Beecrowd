#include <stdio.h>

int main(){
    float nota, media = 0.0;
    int op = 0, qtdNota = 0;

    do{
        op = 0;
        scanf("%f", &nota);

        if(nota >= 0 && nota <= 10){
            media += nota;
            qtdNota++;

            if(qtdNota == 2){
                qtdNota = 0;
                media /= 2;

                printf("media = %.2f\n", media);
                media = 0.0;

                while(op != 1 && op != 2){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &op);
                }
            }
        }else{
            printf("nota invalida\n");
        }
    }while(op != 2);

    return 0;
}
