#include <stdio.h>
#include <conio.h>

 int
main ()
{
  
 
int dia, mes, ano, a, b, c, d;
  
 
 
printf ("Qual o dia do nascimento?\n");
  
scanf ("%i", &dia);
  
printf ("Qual o mC*s do nascimento?\n");
  
scanf ("%i", &mes);
  
printf ("Qual o ano do nascimento?\n");
  
scanf ("%i", &ano);
  
 
a = (dia * 100 + mes) + ano;
  
b = (a / 100) + (a % 100);
  
c = b % 5;
  
 
 
if (c == 0)
    
printf ("TIMIDO");
  
 
  else if (c == 1)
    
printf ("SONHADOR");
  
 
  else if (c == 2)
    
printf ("PAQUERADOR");
  
 
  else if (c == 3)
    
printf ("ATRAENTE");
  
 
  else if (c == 4)
    
printf ("IRRESISTIVEL");
  
 
return 0;

}
