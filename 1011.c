#include <stdio.h>
#define PI 3.14159

int main() {
 
    double R, volume;
    
    scanf("%lf", &R);
    volume = (R*4/3)*R*R*PI;
    
    printf("VOLUME = %0.3f\n", volume);
    
    return 0;
}