#include <stdio.h>
 
int main() {
 
    int codPeca1, qtdPeca1;
    float precoPeca1;
    int codPeca2, qtdPeca2;
    float precoPeca2;
    
    scanf("%i %i %f", &codPeca1,&qtdPeca1,&precoPeca1);
    scanf("%i %i %f", &codPeca2,&qtdPeca2,&precoPeca2);
    
    float total = qtdPeca1*precoPeca1+qtdPeca2*precoPeca2;
    
    printf("VALOR A PAGAR: R$ %0.2f\n", total);
    
    return 0;
}