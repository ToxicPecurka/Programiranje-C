#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funkcija sve_parne_cifre(int x)
int sve_parne(int x)
{
    int bp=0,bc=0;
    x=abs(x);
while (x>0)
        {
            if((x%10)%2==0)
                bp++;
            bc++;
            x=x/10;
        }
        return (bc==bp) ? 1 : 0;
}

void main()
{
    int x;
    printf("unesi ceo broj x");
    scanf("%d",&x);
    if(sve_parne(x)==1)
        printf("SVE CIFRE BROJA %d SU PARNE.\n",x);
    else
        printf("BROJ %d NEMA SVE PARNE CIFRE.\n",x);
}