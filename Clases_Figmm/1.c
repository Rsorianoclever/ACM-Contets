#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  while(a!=0)
  {
    scanf("%d %d",&b,&c);
    if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
    printf("right\n");
    else
    printf("wrong\n");
    scanf("%d",&a);
  }
  return 0;
}