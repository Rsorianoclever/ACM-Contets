#include<stdio.h>
int mayor2(int n)
{
  int i=1,mayor;
  int H[500];
  H[0]=n;
  mayor=H[0];
  while(n!=1)
  {
    if (n%2==0)
    {
      H[i]=H[i-1]/2;
      if(mayor<H[i])
	mayor=H[i];
    }	
    else
    {  
      H[i]=3*H[i-1]+1;
      if(mayor<H[i])
	mayor=H[i];
    }
    n=H[i];
    i++;
  }
  return mayor;
}
int main()
{
  int m;
  
 while(scanf("%d",&m) && m!=0)
  printf("%d\n",mayor2(m));
}