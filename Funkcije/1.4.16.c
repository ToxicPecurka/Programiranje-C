#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funkcija int neopadajuca(int n)
int neopadajuce(int n)
{
    int indikator=0,pc;
    n=abs(n);
    pc=n%10;
    n=n/10;
        while(n>0)
        {
            if(n%10>pc)
            {
                indikator=1;
                break;
            }
            pc=n%10;
            n=n/10;   
        }
        return indikator;
}
void main()
{
    int n;
    printf("unesi ceo broj\n");
    scanf("%d",&n);
    if(neopadajuce(n)==0)
        printf("cifre broja %d su neopadajucem poretku",n);
    else
        printf("cifre broja %d nisu neopadajucem poretku",n);
}