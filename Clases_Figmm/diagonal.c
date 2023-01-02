#include<stdio.h>
 main()
{
    int a,b,c;
    scanf("%d",&a);
    b=1;
    for(b;b<=a;b++)
    {
        c=1; 
        printf("%d\n",b);
        for(c;c<=b;c++)
        printf(" ");
    }

    getch();
}

