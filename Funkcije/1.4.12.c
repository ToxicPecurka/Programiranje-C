#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUnkcija int broj_neparnih_cifara(int x)
int broj_neparnih_cifara(int x)
{
    int brn=0;
    x=abs(x);

    while (x>0)
    {
        if(abs(x%10)%2!=0)
        {
            brn++;   
        }
        x=x/10;
    }
    return brn;
}
void main()
{
    int x;
    while(1)
    {
        printf("unesi ceo broj\n");
        scanf("%d",&x);
        if(x==0)
            break;
        else
            printf("broj %d iama %d neparnih cifara\n", x, broj_neparnih_cifara(x));    
    }
}