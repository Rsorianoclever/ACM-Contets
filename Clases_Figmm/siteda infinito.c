#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(a!=0||b!=0)
	{
	   int s1,s2,s3,n;
        n=2;
        s1=b;
        s2=(a+b)%10;
        s3=(s1+s2)%10;
        printf("%d %d %d",a,s1,s2);
	   while(s1!=a || s2!=b)
	   {
            printf(" %d",s3);        
            n++;       
            s1=s2;
            s2=s3;
            s3=(s1+s2)%10;
        }
        printf("\n%d\n",n-1);
        scanf("%d %d",&a,&b); 
    }
    getch();
}
