#include <stdio.h>

long long faktorijal(int n)
{
	if(n==0)
		return 1;
	else
	{
		return n*faktorijal(n-1);
	}
}

int main()
{
	long long n,f;
	printf("Unesite broj: ");
	scanf("%d",&n);
	f=faktorijal(n);
	printf("Faktorijal od %llu je %llu",n,f);
	return 0;
}
