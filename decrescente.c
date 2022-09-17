
#include <stdio.h>

int main()
{
    int valor, contador=0;
    
    printf("Voce quer que a contagem va ate qual valor?\n ");
    scanf ("%i" , &valor);
    
    while(valor >= contador){
        
        printf("%i\n", valor);
        
        valor--;
        
    }
    return 0;
}
