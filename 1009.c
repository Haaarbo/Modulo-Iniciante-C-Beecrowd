#include <stdio.h>
#include <string.h>

int main() {
 
    char nome[20];
    double salarioFixo, montanteTotal, salario;
    
    gets(nome);
    scanf("%lf %lf", &salarioFixo, &montanteTotal);
    
    salario = salarioFixo+montanteTotal*15/100;
    
    printf("TOTAL = R$ %0.2f\n", salario);
    
    return 0;
}