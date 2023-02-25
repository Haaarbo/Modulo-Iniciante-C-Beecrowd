#include <stdio.h>

int main()
{
    float salario, impostoRenda, excedente;
    /*
    Entendendo o exemplo dado com o que foi informado
    na questao, e utilizado apenas o EXCEDENTE de uma
    determinada faixa de salario para se taxar, sendo
    que ainda ha diferentes taxas em diferentes intervalos

    Por exemplo:

    Se salario = 1000, isento, nenhum problema

    Mas se salario = 2000.01, o que e taxado nao e o salario
    interio, mas apenas o 0.1, visto que a taxa conta a
    partir do excedente da faixa de isencao.
    Se salario = 2500, pega-se apenas o excedente em relacao
    a faixa anterior (se o maximo de isencao e 2000, entao alem
    acaba sendo o excedente, portanto, salario-2000), para entao
    com o EXCEDENTE podemos obter o imposto de renda.


    No caso de um salario entre 3000 e 4500, utiliza-se a mesma
    ideia, porem somando com o maximo da  taxa anterior. Exemplo:

    Se salario = 4000
    Na faixa de 2000.01 e 3000, o excedente foi maximo = 1000
    Portanto aplica-se a taxa de 8% nesses 1000, e avalia-se a proxima
    faixa de salario:

    3000.01 e 4500, tira-se o excedente(4000-3000) e obtem-se 1000, mas como
    usamos o parametro da segunda faixa de valores, usamos a segunda taxação,
    com 18%, ou seja --> 1000*18%
    Para o imposto de renda completo, basta somar os 8%1000(ou 80) e o
    excedente*18%


    Para acima de 4500, ja temos um exemplo e usamos a mesma ideia
    4520 > 2000? --> +80
    4520 > 3000? --> +270 (1500*18/100 ou 15*18)
    4520 > 4500? --> +20(excedente ou 4520-4500) * 28%
    Imposto de Renda = 80 + 270 + (28% de 20) = 355.6
    */

    scanf("%f", &salario);

    if(salario >= 0 && salario <= 2000)
    {
        printf("Isento\n");
    }

    else if(salario > 2000 && salario <= 3000)
    {
        excedente = salario - 2000;
        impostoRenda = (excedente*8)/100;
        printf("R$ %.2f\n", impostoRenda);
    }

    else if(salario > 3000 && salario < 4500)
    {
        excedente = salario - 3000;
        impostoRenda = (excedente*18/100) + 80;
        printf("R$ %.2f\n", impostoRenda);
    }

    else
    {
        excedente = salario - 4500;
        impostoRenda = (excedente*28/100) + 350;
        //8% de 1000 + 18% de 1500 = 80 + 270 = 350
        printf("R$ %.2f\n", impostoRenda);
    }
    return 0;
}
