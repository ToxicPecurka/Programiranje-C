#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Funkcija float apsolutna vrednost(na dve decimale)
float apsolutna_vrednost(float x){
    float av;
    av=x;
    if(av<0)
        av*=-1;
    else
        av*=1;
    return av;

}
void main(){
    float x;
    printf("unesi broj\n");
    scanf("%f",&x);
    printf("apsolutna vrednost broja %.4f je %.2f", x, apsolutna_vrednost(x));
}