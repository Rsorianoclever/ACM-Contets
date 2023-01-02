#include<stdio.h>
int main()
{
    char A[11],B[11];
    scanf("%s %s",A,B);
    int i,k,n,m,mult=0;
    n=strlen(A);
    m=strlen(B);
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
            mult=mult+(A[i]-48)*(B[k]-48);
    }
    printf("%d",mult);
    getch();
    return 0;
}
