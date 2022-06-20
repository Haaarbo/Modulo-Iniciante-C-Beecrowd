#include <stdio.h>
 
int main() {
 
    double N;
    //variaveis das notas, sendo indice 0 para 100, indice 1 para 50 e seguindo assim, tambem para as moedas
    int contNota[6] = {0};
    int contMoeda[6] = {0};

    //lendo entrada
    scanf("%lf", &N);

    double i; //variavel para contar as notas e moedas

    //para notas
    for(i = N; i >= 100; i -= 100)
        contNota[0]++;
    
    for(; i >= 50; i -= 50)
        contNota[1]++;

    for(; i >= 20; i -= 20)
        contNota[2]++;

    for(; i >= 10; i -= 10)
        contNota[3]++;

    for(; i >= 5; i -= 5)
        contNota[4]++;

    for(; i >= 2; i -= 2)
        contNota[5]++;

    //para moedas
    for(; i >= 1; i -= 1)
        contMoeda[0]++;

    for(; i >= 0.50; i -= 0.50)
        contMoeda[1]++;

    for(; i >= 0.25; i -= 0.25)
        contMoeda[2]++;

    for(; i >= 0.10; i -= 0.10)
        contMoeda[3]++;

    for(; i >= 0.05; i -= 0.05)
        contMoeda[4]++;

    for(; i >= 0.01; i -= 0.01)
        contMoeda[5]++;


    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100,00\n", contNota[0]);
    printf("%i nota(s) de R$ 50.00\n", contNota[1]);
    printf("%i nota(s) de R$ 20.00\n", contNota[2]);
    printf("%i nota(s) de R$ 10.00\n", contNota[3]);
    printf("%i nota(s) de R$ 5.00\n", contNota[4]);
    printf("%i nota(s) de R$ 2.00\n", contNota[5]);

    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", contMoeda[0]);
    printf("%i moeda(s) de R$ 0.50\n", contMoeda[1]);
    printf("%i moeda(s) de R$ 0.25\n", contMoeda[2]);
    printf("%i moeda(s) de R$ 0.10\n", contMoeda[3]);
    printf("%i moeda(s) de R$ 0.05\n", contMoeda[4]);
    printf("%i moeda(s) de R$ 0.01\n", contMoeda[5]);

    return 0;
}