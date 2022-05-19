#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUNKCIJA int sadrzi(int x, int c)
int sadrzi(int x, int c)
{
        while (x>0)
        {
            if(abs(x%10)==c)
            
                return 1;
            
            else
            
                x=x/10;
        }
        return 0;
}
void main()
{
    int x, c;
    printf("unesi ceo broj\n");
    scanf("%d",&x);
    p:
    printf("unesi cifru\n");
    scanf("%d",&c);
    if((c>=0)&&(c<10))
    {
        
        if(sadrzi(x,c)==1)
            printf("broj %d sadrzi u sebi broj %d", x, c);
        else
            printf("broj %d sadrzi u sebi broj %d", x, c);   
    }
    else
    {
        printf("Unesi broj C ponovo");
        goto p;
    }
}