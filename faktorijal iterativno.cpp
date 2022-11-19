#include <stdio.h>

long long faktorijal(long long n)
{
	long long f,i;
	f=1;
	for(i=1;i<n+1;i++)
		f=f*i;
	return f;
}

int main()
{
	long long f,n;
	printf("Unesite broj: ");
	scanf("%d",&n);
	f=faktorijal(n);
	printf("Faktorijal od %llu je %llu",n,f);
	return 0;
}
