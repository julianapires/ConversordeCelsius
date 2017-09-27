#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    float K, C;
    
    printf ("Informe a temperatura em graus Celsius:");
    scanf ("%f", &C);
    
    K = C + 273.15;
    
    printf ("A temperatura informada, em graus Kelvin é de: %.2f", K);
  
  system("PAUSE");	
  return 0;
}
