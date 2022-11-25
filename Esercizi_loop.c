#include <stdio.h>

int main () 
{
/*
int contatore1=0;
int contatore2=0;
int massimo=10;

while esterno stampa le righe
while interno quante * per riga

while (contatore2<10)
{   contatore1=0;
    printf("\n");
    while (contatore1<massimo)
    {   
        printf("*");
        contatore1++;
    }
    contatore2++;
    massimo--;
}


int contatore1=0;
int contatore2=0; 
int massimo=1;

while (contatore1<10)
{
    contatore2=0;
    printf("\n");
    while (contatore2<massimo)
    {
        printf("*");
        contatore2++;
    }
    contatore1++;
    massimo++; 
}
*/

int contatore1=0;
int contatore2=0;
while (contatore1<10)
{
    printf("\n");
    contatore2=0;
    while (contatore2<10)
    {
         printf("*");
         contatore2++;
    }
    contatore1++;
}

printf("\n\n");

for (int contatore1=0; contatore1<10; contatore1++)
{
   printf("\n");
   for (int contatore2=0; contatore2<10; contatore2++)
   {printf("*");}
}


}
