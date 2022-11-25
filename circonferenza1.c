#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()

{
   int pigreco=3.14; 
   /*dichiarazione di variabile*/ 

   int raggio;
    float circ, area; 
    /*float è una variabile che rappresenta numeri a virgola mobile*/

	printf("Inserisci il valore del raggio:");
	scanf("%d", &raggio); 
    /*%... indica come deve essere letto il dato immesso dalla tastiera;
    %d indica numero intero*/

    circ = 2*pigreco*raggio; 
    /*definisco le variabili che volgio calcolare*/
    area = pigreco*pow(raggio, 2);
    /*pow(base, esponente)*/

	printf("La circonferenza del cerchio vale: %.2f\n", circ); 
    /*dico al programma di restituire il valore calcolato con circ*/
	printf("L'area del cerchio vale: %.2f\n", area); 
    /*%.2f dice di stampare fino alla posizione n decimale la variabile dopo la virgola*/

	return 0; 
    /*indica che il programma ha funzionato*/ 

}


