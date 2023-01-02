#include<stdio.h>
int A[500];
int B[500];
int mescla( )
int ordena(int n0, int n1, int A[])
{
    int k=n1/2;
    ordena(0,n1/2,A);
    ordena(n1/2+1,n,A);
    mescla();    
}

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    ordena(0,n-1,A);
    for(i=0;i<n;i++)
        printf("%d ";A[i]);
    
}
