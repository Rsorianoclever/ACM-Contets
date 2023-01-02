#include<stdio.h>
int J2 (int n)
{	
	if(n==1)
		return 0;
	if(n%2==0)
		return 2*J2(n/2);
	return 2*(J2((n-1)/2)+1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",J2(n)+1);
	return 0;
}
