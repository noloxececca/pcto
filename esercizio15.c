#include <stdio.h>
int main()
{
     int n;
     printf("inserisci la tua eta\n");
     scanf ("%d", &n);
     if(n>=18)
     {
        printf("sei maggiorenne\n");
     }
     else if (n<18)
     {
        printf("sei minorenne\n");
     }
}