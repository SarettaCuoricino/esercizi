#include<stdio.h>
int main()
{
   int base;
   int altezza;
   float area;

   printf("\nDigitare il valore della base: ");
   scanf("%d", &base); 

   printf("\nDigitare il valore dell'altezza: ");
   scanf("%d", &altezza); 

   area = base*altezza/2;
   printf("\nL'area del cerchio è: %f ", area);

   return (0);
}
