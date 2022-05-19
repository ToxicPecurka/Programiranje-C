#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//FUNKCIJA FLOAT ZBIR_RECIPROCNIH
float zbir_recipr(int n){
    float s=0;
    int i;
    for(i=1; i<=n; i++)
        {
        s+=1.0/i;
        }
    return s;
        
}
void main(){
    int n;
    printf("unesi ceo pozitivan broj\n");
    scanf("%d",&n);
     if(n<=0){
       printf("greska u unosu");
    
    }
    else
        printf("suma reciprocnih od 1 do %d je %.2f", n, zbir_recipr(n));
   
}