#include <stdio.h>

int min(int a, int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int najkraci(int mat[6][4], int n, int m)
{
	if(n==5 && m==3)
	{
		return mat[5][3];
	}
	else
	if(m==3)
	{
		return(mat[n][m]+najkraci(mat, n+1, m));
	}
	else
	if(n==5)
	{
		return(mat[n][m]+najkraci(mat, n, m+1));
	}
	{
		return(min(mat[n][m]+najkraci(mat, n, m+1), mat[n][m]+najkraci(mat, n+1, m)));
	}

}

int main()
{
	int n,m,i,j,min;
	int mat[6][4]={{2,3,7,0},{1,4,2,3},{5,1,3,6},{7,1,2,2},{4,3,5,8},{9,1,4,3}};
	for(i=0;i<6;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}
	min=najkraci(mat,0,0);
	printf("Najkraci put ima vrednost %d", min);
	return 0;
}
