#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int suma;
	suma=0;
	while(i<=n)
	{
		suma=i+suma;
		i=i+1;
	}
	printf("%d\n",suma);
getch();
}

