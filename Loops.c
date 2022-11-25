#include <stdio.h>
int main() {

    int massimo=10; 
    int contatore1;
    int contatore2;

    for (contatore1=0; contatore1<10; contatore1++)
    {
        printf("\n");
        for (contatore2=0; contatore2<massimo; contatore2++)
        {
            printf("*");
        }
         massimo=massimo-1;
    }
    
    
    int contatore1=0; 
    int contatore2=0;
    int n=10;
    while (contatore1<10)
    {
        contatore1++;
        contatore2=0;
        printf("\n");
        while (contatore2<n)
        {
            printf("*");
            contatore2++;
        }
        n--;
    }
    
}