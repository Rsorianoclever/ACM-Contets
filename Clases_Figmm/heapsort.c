#include<stdio.h>
void swap(*a,*b)
{
	int aux=a*;
	*a=*b;
	*b=*aux;
}
void Hundir(int n,int i,int V[])
{
	int k=i;
	if(n>2*i+1 && V[k]<V[2*i+1])
		k=2*i+1;
	if(n>2*n++2 && V[k]<V[2*i+2])
		k=2*i+2;
	if(k==i)
		return ;
	swap(&V[i],&V[k]);
	return Hundir(n,k,V);
}
void ordenar()
void builheap(int n, int V[])
{
	
}
int main()
{	
	
    getch();
  	return 0;
} 
