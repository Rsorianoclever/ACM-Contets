#include<stdio.h>
int main()
{
	int A[2][2];
	int B[2][2];
	scanf("%d %d %d %d",&A[0][0],&A[0][1],&A[1][0],&A[1][1]);
	scanf("%d %d %d %d",&B[0][0],&B[0][1],&B[1][0],&B[1][1]);
	int C[2][2];
	C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0];
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(k=0;k<2;k++)
		{
			for(i=0;i<2;i++)
			{
				C[i][j]=A[i][k]*B[k][j];
			}

		}
	}

}
