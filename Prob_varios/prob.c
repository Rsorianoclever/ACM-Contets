#include<stdio.h>
int J(int n, int k)
{	
	if(n==1)
		return 0;
	return (k+J(n-1,k)%n);
}
int main()
{
	int n,k;
	scnf("%d %d", &n, &k);1
}
