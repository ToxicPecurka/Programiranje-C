#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Funkija int sve_cifre_jednake(int x)
int sve_jednak(int x)
{
    int c=0;
    c=abs(x)%10;
    x=abs(x)%10;
    while (x>0)
    {
        if(x!=c)
            return 0;
        x=x/10;
    }
    return 1;
}
void main()
{
    int x;
    printf("unesi ceo broj\n");
    scanf("%d",&x);
    if(sve_jednake(x)==1)
        printf("sve cifre broja su jednake.\n");
    else
        printf("broj %d nema sve iste cifre.\n",x);
}