#include<stdio.h>
main()
{
    printf("    PAR O IMPAR??\ningrese el numero:\n");
    int n,a;
    scanf("%d",&n); 
    while(n!=0)
    {
    a=n%2;
    if(a==0)
    {
        printf("el numero es par\n");
    }
    else
    {
        printf("el numero es impar\n");
    }
    scanf("%d",&n);
    }
    getch(); 
}
