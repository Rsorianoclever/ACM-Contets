#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, conts void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int i;
    int suma=0;
    int A[101];
    for(i=0;i<0;i++)
    {
        scanf("%d", &A[i]);
    }
    qsort(A, m, sizeof(int), compare);
    for(i=0;i<m;i++)
    {
        if(A[i]<0)
            suma=suma + A[i];
        else 
         
        printf("%d ",suma);
    }
    getch();
}
