#include <stdio.h>

int main()
{
    int qtdGrenal = 0, op;
    int winsInter = 0, winsGremio = 0, empates = 0;
    int golsGremio = 0, golsInter = 0;

    do
    {
        op = 0;

        scanf("%d %d", &golsInter, &golsGremio);
        if(golsInter > golsGremio)
            winsInter++;

        else if(golsInter < golsGremio)
            winsGremio++;

        else
            empates++;

        qtdGrenal++;

        while(op != 1 && op != 2)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &op);
        }

    }while(op != 2);

    printf("%d grenais\n", qtdGrenal);
    printf("Inter:%d\n", winsInter);
    printf("Gremio:%d\n", winsGremio);
    printf("Empates:%d\n", empates);

    if(winsInter > winsGremio)
        printf("Inter venceu mais\n");
    else if(winsInter < winsGremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}
