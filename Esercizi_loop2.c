#include <stdio.h>
int main ()
{
int contatore1=0;
int contatore2=0;
int spazio=0;

while (contatore1<10)
{
    printf("\n");
    contatore2=0;
    while (contatore2<10)
    {
       if (contatore2<spazio)
       {
        printf(" ");
       }
        else
       {
        printf("*");
       }
       contatore2++;
    }
    contatore1++;
    spazio++;
}
}