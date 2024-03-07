#include <stdio.h>
int main()
{
    int  met;
    char parte;
    char cucina;
    char bagno;
    char camera;
    char soggiorno;
    printf("inserisci metri quadri\n" );
    scanf("%d", &met);
    
    
     if(met>0 && met<50)
    {
        
         printf("seleziona che parte di casa vuoi arredare\n ");
         scanf("%c", &parte);
         if (cucina && soggiorno)
         }
            printf("come arredo per la cucina e per il soggiorno ti possiamo consigliarti vari mobili a tua scelta 
            come questa lampada da sogno con il codice articolo: 205361 oppure questo ottimo tavolino che in quello spazio starebbe benissimo con il Codice articolo: 75451
            altrimenti uno stupendo divano ad angolo che calza a pennello in quell angolino con il Codice articolo: 201314");
         {
          
        
    }   
    else if (met>0 && met>=50)
    {
        printf(" seleziona che arte di casa vuoi arredare\n ");
    }
    else if (met>=75)
    {
     printf(" seleziona che arte di casa vuoi arredare\n ");
    }
}
