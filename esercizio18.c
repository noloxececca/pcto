#include <stdio.h>
int main()
{
    int a,i;
    int c=0;
    printf("ïnserisci un numero\n");
    scanf("%d",&i);
    i=2;
    while(i<a)
    {
        if (a%i==0)
        {
        c=c+1;
        }
        i=1+i;
    }
    if (c==0)
    {
        printf("numero primo\n");
    }
    else 
    {
        printf("numero non primo\n");
    }
}

    