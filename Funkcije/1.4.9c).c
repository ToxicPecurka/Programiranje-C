#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUNKCIJA x NA n STEPEN
float stepen(float x, int n){
    int i;
    float f=1;
    for(i=1;i<n;i++)
        f*=x;
    return f;
}
void main(){
    float x;
    int n;
    printf("unesi realana broj x");
    scanf("%f",&x);
    printf("unesi broj stepena\n");
    scanf("%d",&n);
    printf("broj %f na %d je %f", x, n, )
}