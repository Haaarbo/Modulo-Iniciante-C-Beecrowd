#include <stdio.h>

int main() {
    int inputCombustivel;
    int contAlcool = 0, contGasolina = 0, contDiesel = 0;

    while(inputCombustivel != 4)
    {
        scanf("%d", &inputCombustivel);
        if(inputCombustivel == 1)
            contAlcool++;
        else if(inputCombustivel == 2)
            contGasolina++;
        else if(inputCombustivel == 3)
            contDiesel++;
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contAlcool);
    printf("Gasolina: %d\n", contGasolina);
    printf("Diesel: %d\n", contDiesel);
    
    return 0;
}