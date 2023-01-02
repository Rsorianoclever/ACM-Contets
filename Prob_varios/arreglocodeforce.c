#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, conts void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int n;
    int mayor=0;
    long A[100000];
    int k=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld", &A[i]);
        if(mayor<A[i])
            mayor=A[i];
            k=i;
    }
    A[k]=1;
    qsort(A, n, sizeof(long), compare);
    if(mayor==1)
        A[n-1]=2;
    for(i=0;i<n;i++)
        printf("%ld ", A[i]);
    printf("%ld\n",A[i]);

    getch();
}
