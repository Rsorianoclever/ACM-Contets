#include<stdio.h>
int main()
{
	int A[3];
	int B[3];
	scanf("%d %d %d",&A[0],&A[1],&A[2]);
	scanf("%d %d %d",&B[0],&B[1],&B[2]);
	int i;
	int suma=0;
	for(i=0;i<3;i++)
	{
	suma=suma+A[i]*B[i];
	}

	printf("%d\n",suma);
}
