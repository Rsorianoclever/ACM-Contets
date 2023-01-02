#include<stdio.h>
int R(int n){
	if(n==1)
		return 1;
	if(n%2==0)
		return (n/2)*(n/2)+R(n/2);
	return (n+1)*(n+1)/4+R((n-1)/2);
}
int main(){	
	int n;
	scanf("%d\n",&n);
	printf("%d",R(n));
	return 0;
}
