#include <stdio.h>

void binarno(int niz[], int elem, int poc, int kraj)
{
	int p;
	if(poc>kraj)
	{
		printf("Trazeni element ne postoji u nizu");
	}
	else
	{
		p=(poc+kraj)/2;
		if(niz[p]==elem)
		{
			printf("Trazeni element je %d. clan niza",p+1);
		}
		else if((niz[p]<elem))
		{
			binarno(niz, elem, p+1, kraj);
		}
		else if((niz[p]>elem))
		{
			binarno(niz, elem, poc, p-1);
		}
	}
	
}

int main()
{
	int niz[10]={2,5,7,8,10,13,17,20,23,28};
	binarno(niz, 8, 0, 9);
	return 0;
}
