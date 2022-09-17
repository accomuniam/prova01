#include <stdio.h>

int main() {
  long int a,b,soma;
  int termos,contador;
  double aux;

  printf("quantos termos da sequencia de Fibonacci devem ser exibidos:\n");
  scanf("%d", &termos);

  if (termos <= 1) {
    printf("Numero de termos invalido\n");
  }
  else {
    
    a = 1;
    b = 1;
    contador = 2;
    printf("\n1\n1\n");

    while(contador < termos) {
      soma = a + b;
      aux = soma;
      aux = aux/b;
      printf("%ld\n ", soma );
      a = b;
      b = soma;
      contador ++;
      
    }
  }

  return(0);
}