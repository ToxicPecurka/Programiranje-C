#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// FUNKCIJA INT KVADRAT I KUB
int kvadrat(int x){
    int kvadrat;
    kvadrat=x*x;
    return kvadrat;
}
int kub(int x){
    int kub;
    kub=x*x*x;
    return kub;
}
void main(){
    int x;
    printf("unesi broj x\n");
    scanf("%d",&x);
    printf("kvadrat broja %d je %d\nkub broja %d je %d",x, kvadrat(x), x, kub(x));
}