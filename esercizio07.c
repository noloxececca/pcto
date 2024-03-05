#include <stdio.h>
int main()
{
     char sesso;
     printf("inserisci il tuo sesso:");
     scanf( "%c", &sesso);
     if(sesso == 'm')

     {
          printf ("il tuo sessso e maschio\n");
     }
     else if(sesso == 'f')
     {
          printf("sei una donna\n");
     }
     else
     {
         printf ("dio ti ha creato cosi, cosa combini\n");
     }
}
