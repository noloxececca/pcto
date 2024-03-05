#include <stdio.h>
int main()
{
     int n ;
     printf("inserisci il numero:");
     scanf( "%d", &n);
     if (n==10)
     {
          printf ("uguale a 10");
     }
     else if(n>5)
     {
          printf("e maggiore di 5 \n");
     }
     else if (n==5)
     {
         printf ("e uguale a 5\n");
     }
     else if (n<5)
     {
        printf("minore di 5\n");
     }
     
}
