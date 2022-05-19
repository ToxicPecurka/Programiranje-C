#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// FUNKCIJA FLOAT RAZLOMLJENI_DEO
float razlomljeni_deo(float x){
    float rd;
    rd=x-(int)x;
    return fabs(rd);
}
void main(){
    float x, rd;
    printf("unesi realan broj\n");
    scanf("%f", &x);
    rd=razlomljeni_deo(x);
    printf("razlomljeni deo broja %f je %.6f", x, rd);
}