#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char A[1001];  
   
    while ( scanf("%s",A) && strcmp(A,"0")!= 0)
 {
        
    n=strlen(A);
    int sp=0,si=0,suma=0;
    for(i=0;i<n;i++)   
    {
        if(i%2==0)
        sp=sp+A[i]-48;
        else
        si=si+A[i]-48;
    }
    suma=si-sp;
    if(suma%11==0)
    printf("%s is a multiple of 11.\n",A);
    else
    printf("%s is not a multiple of 11.\n",A); 
  } 
    return 0;  
}
