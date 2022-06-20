#include <stdio.h>
 
int main() {
 
    int idade, ano, mes, dia;

    scanf("%i", &idade);

    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;

    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", ano, mes, dia);

    return 0;
}