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

void sortiraj(int niz[], int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(niz[i]>niz[j])
			{
				t=niz[i];
				niz[i]=niz[j];
				niz[j]=t;
			}
		}
	}
}

void stampaj(int niz[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",niz[i]);
	}
	printf("\n");
}

int main()
{
	int n,i,elem;
	printf("Unesite duzinu niza: ");
	scanf("%d",&n);
	int niz[n];
	for(i=0;i<n;i++)
	{
		printf("Unesite %d. clan niza: ",i+1);
		scanf("%d",&niz[i]);
	}
	printf("Unesite element: ");
	scanf("%d", &elem);
	sortiraj(niz,n);
	stampaj(niz,n);
	binarno(niz, elem, 0, n-1);
	return 0;
}
