#include <stdio.h>

long long stepen(int a, int b)
{
	if(b==1)
		return a;
	else
	{
		return a*stepen(a,b-1);
	}
}

int main()
{
	int n,m;
	//printf("Unesite osnovu i eksponent: ");
	//scanf("%d%d",&n,&m);
	n=2;
	m=60;
	printf("%d na %d je %llu",n,m,stepen(n,m));
	return 0;
}
