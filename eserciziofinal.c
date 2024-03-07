#include <stdio.h>
int main()
{
    int  met;
    printf("inserisci metri quadri\n" );
    scanf("%d", &met);
    
     if(met>0 && met<50)
    {
        printf(" seleziona che arte di casa vuoi arredare\n ");
    } 
    else if (met>0 && met>50)
    {
        printf(" seleziona che arte di casa vuoi arredare\n ");
    }
    else if (met>75)
    {
     printf(" seleziona che arte di casa vuoi arredare\n ");
    }
}
