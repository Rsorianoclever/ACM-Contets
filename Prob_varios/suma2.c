	#include<stdio.h>
    main()
	{ 
	int i,n;
	scanf("%d",&n);
	int suma=1;
	for(i=1;i<=n;i=i+1)
	{
		suma=suma*i;
	}
	printf("%d\n",suma);
    getch();
}
