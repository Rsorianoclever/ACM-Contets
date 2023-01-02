#include<stdio.h>
int J (int n, int k)
{	
	if(n==1)
		return 0;
	return (k+J(n-1,k))%n;
}
int main()
{
	int n,k;
	while (scanf("%d %d", &n, &k) !=EOF)
	printf("%d\n",J(n,k)+1);
	return 0;
}
