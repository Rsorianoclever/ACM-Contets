#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n<540|| n>1520)
	{
	print("error\n");
	}
	else 
	{
	int a,b,c,d,e;
	int A,B,C,D,E;
	A=0
	B=0
	C=0
	D=0
	E=0
	a=n-580;
	b=n-980;
	c=n-1190;
	d=n-1250;
	e=n-1420;
	
	if(a<0)
	{
		a=-1*a;
		A=1;			
	}
	if(b<0)
	{
		b=-1*b;
		B=1;			
	}
	if(c<0)
	{
		c=-1*c;
		C=1;			
	}
	if(d<0)
	{
		d=-1*d;
		D=1;			
	}
	if(e<0)
	{
		e=-1*e;
		E=1;			
	}
	
	int menor=a;
	int caracter;
	caracter=1
	if(menor>=b)
	{	 
	 menor=b;
	}
	if(menor>=c)
	{	
	 menor=c;
	}
	if(menor>=d)
	  menor=d;
	f(menor>=e)
	  menor=e;
	printf("%d\n,menor");
	if(caracter=0)
	{
		printf("atras %d\n")
	}
	}

}
