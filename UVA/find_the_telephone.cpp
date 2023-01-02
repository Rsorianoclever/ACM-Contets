#include<cstdio>
#include<cstring>
//#include<iostream>
using namespace std;

int main(){
    char b[32];
    int n,i;
    while(scanf("%s",b)==1){
        n=strlen(b);
        for(i=0;i<n;i++){
            if(b[i]=='A'||b[i]=='B'||b[i]=='C')
                printf("2");
            else if(b[i]=='D'||b[i]=='E'||b[i]=='F')
                printf("3");
            else if(b[i]=='G'||b[i]=='H'||b[i]=='I')
                printf("4");
            else if(b[i]=='J'||b[i]=='K'||b[i]=='L')
                printf("5");
            else if(b[i]=='M'||b[i]=='N'||b[i]=='O')
                printf("6");
            else if(b[i]=='P'||b[i]=='Q'||b[i]=='R'||b[i]=='S')
                printf("7");
            else if(b[i]=='T'||b[i]=='U'||b[i]=='V')
                printf("8");
            else if(b[i]=='W'||b[i]=='X'||b[i]=='Y'||b[i]=='Z')
                printf("9");
            else printf("%c",b[i]);     
        }          
        printf("\n");
    }
    return 0;
}
