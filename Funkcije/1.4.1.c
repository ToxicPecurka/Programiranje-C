#include <stdio.h>
#include <stdlib.h>
// FUNKCIJA INT MINIMUM
int min(int x, int y, int z)
{
    return(x<=y&&x<=z) ? x: (y<=x&&y<=z) ? y : (z<=x&&z<=y) ? z : 0 ;
}

void main()
{

    int x,y,z;
    printf("Unesi tri broja x, y, z\n");
    scanf("%d %d %d",&x, &y, &z);
    printf("Minimum brojeva %d %d %d je %d", x, y, z, min(x,y,z));
}