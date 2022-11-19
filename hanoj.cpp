#include <stdio.h>

void hanoj(int n, int sa, int pom, int na)
{
	if(n>0)
	{
		hanoj(n-1,sa,na,pom);
		printf("%d -> %d\n",sa,na);
		hanoj(n-1,pom,sa,na);	
	}
}

int main()
{
	int n; //broj diskova
	scanf("%d",&n);
	hanoj(n,1,2,3);
	return 0;
}
