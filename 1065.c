#include <stdio.h>
 
int main() {
 
    int v[6];
    int cont;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &v[i]);
        if(v[i]%2 == 0)
            cont++;
    } 
     
    printf("%d valores pares\n", cont); 
 
    return 0;
}