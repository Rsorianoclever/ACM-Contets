#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char S[2000];
    bool nada=true;
    int a,i;
    while(gets(S)){
        a=strlen(S);
        for(i=0;i<a;i++){
            if(S[i]=='"'){
                if(nada)
                    printf("``");
                else 
                    printf("''");
                nada=!nada;
            }
            else printf("%c",S[i]);
       }
       printf("\n");
    }
    return 0;
}
