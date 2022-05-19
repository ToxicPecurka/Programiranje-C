#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Funkcija koja odredjuje aritmeticku sredinu float aritmrtica_sredina(int n) 
void aritmeticka_sredina(int n){
    float zbir=0;
    float i,as;
    if(n<1)
    printf("pogresan usnos");
    else
    for(i=1;i<=n;i++)
    {
        zbir+=i;
    }
    zbir=zbir/n;
    return fabs(zbir);
}
void main(){
    int n;
    printf("unesi broj\n");
    scanf("%d",&n);
    printf("as je %.3f",aritmeticka_sredina(n));
}