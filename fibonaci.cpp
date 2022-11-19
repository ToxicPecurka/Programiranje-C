#include <stdio.h>

long long fibonaci(long n)
{
	if(n==1 || n==2)
	{
		return 1;	
	}
	else return fibonaci(n-1)+fibonaci(n-2);
}

int main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%lli\n",fibonaci(i));	
	}
	return 0;
}
