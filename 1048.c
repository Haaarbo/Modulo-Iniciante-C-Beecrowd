#include <stdio.h>

int main()
{
    int reajustePer;
    //reajuste percentual
    float reajuste, salarioAntigo, salarioAtual;
    //reajuste bruto

    scanf("%f", &salarioAntigo);

    do
    {
        if(salarioAntigo < 0)
        {
            printf("Valor invalido.\n\n");
            scanf("%f", &salarioAntigo);
        }

        else if(salarioAntigo >= 0 && salarioAntigo <= 400)
            reajustePer = 15;

        else if(salarioAntigo > 400 && salarioAntigo <= 800)
            reajustePer = 12;

        else if(salarioAntigo > 800 && salarioAntigo <= 1200)
            reajustePer = 10;

        else if(salarioAntigo > 1200 && salarioAntigo <= 2000)
            reajustePer = 7;

        else
            reajustePer = 4;

    }while(salarioAntigo < 0);

    reajuste = (salarioAntigo*reajustePer)/100;
    salarioAtual = reajuste + salarioAntigo;

    printf("Novo salario: %.2f\n", salarioAtual);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %i %\n", reajustePer);

    return 0;
}
