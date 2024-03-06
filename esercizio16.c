#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("ïnserisci tre lunghezze\n");
    scanf("%d %d %d", &a,&b,&c);

    if (b+c<=a || b+a<=c || c+a<=b)
    {
         printf("non e una sega\n");
        
    }
    else if (a==b && b!=c && c!=a)
    {
        printf("ïl triangolo e isoscele\n");
    }
   else if (a!=b && b!=c && a!=c) 
    {
        printf("ïl triangolo e scaleno\n");
    }
    else if (a==b&&b==c)
    {
      printf("equilatero");
    }
}