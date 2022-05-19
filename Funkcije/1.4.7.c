#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUNKCIJA INT PREBROJAVANJE
int prebrojavanje(float x){
    int bp=0;
    float i=1;
    while(i!=0){
        printf("unesi niz brojeva\n");
        scanf("%f",&i);
        if(x==i)
        bp++;
    }
    return bp;
}
void main(){
    float x;
   printf("unesi broj\n");
   scanf("%f",&x);
   printf("broj %f se u nizu brojeva ponavlja %d puta", x, prebrojavanje(x));
}