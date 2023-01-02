#include<cstdio>
#include<string.h>
using namespace std;
int main(){
    char A[1000];
    int n,b,i;
    while(gets(A)){
        n=strlen(A);
        b=-1;
        for(i=0;i<n;i++){
            if(A[i]==' '){
                for(int j=i-1;j>b;j--)
                    printf("%c",A[j]);
            printf(" ");
            b=i;
            }
        }
        for(int h=n-1;h>b;h--)
            printf("%c",A[h]);
        printf("\n");   
    }
    return 0;
}
