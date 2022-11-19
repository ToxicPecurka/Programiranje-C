#include <stdio.h>

int stepen(int a, int b)
{
	int i,s;
	s=1;
	for(i=0;i<b;i++)
		s=s*a;
	return s;
}

int main()
{
	int n,m,s;
	printf("Unesite osnovu i eksponent: ");
	scanf("%d%d",&n,&m);
	s=stepen(n,m);
	printf("%d na %d je %d",n,m,s);
	return 0;
}
