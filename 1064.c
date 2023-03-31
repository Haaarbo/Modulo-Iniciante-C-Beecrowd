#include <stdio.h>
 
int main() {
 
    int cont = 0;
    float media, v[6], somatorio = 0;
    
    for(int i = 0; i < 6; i++)
    {
        scanf("%f", &v[i]);
        if(v[i] > 0)
        {
            cont++;
            somatorio += v[i];
        }
    }
    
    media = somatorio/cont;
    
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", media);
 
    return 0;
}