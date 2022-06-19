#include <stdio.h>
 
int main() {
 
    int numFuncionario, horasFuncionario;
    float salarioHora, salario;
    
    scanf("%i %i %f", &numFuncionario,&horasFuncionario,
    &salarioHora);
    
    salario = salarioHora*horasFuncionario;
    
    printf("NUMBER = %i\n", numFuncionario);
    printf("SALARY = U$ %0.2f\n", salario);
    
    return 0;
}