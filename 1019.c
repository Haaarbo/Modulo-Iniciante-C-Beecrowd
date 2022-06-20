#include <stdio.h>
 
int main() {
 
    int N, hora, minuto, segundo;

    scanf("%i", &N);

    hora = N/3600;
    minuto = (N%3600)/60;
    segundo = (N%3600)%60;
    printf("%i:%i:%i\n", hora, minuto, segundo);

    return 0;
}