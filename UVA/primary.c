#include<stdio.h>
int main(){
    long long int a,b,c,cont;
    while(scanf("%lld %lld",&a,&b)&&(a||b)){
        cont=c=0;
        while(a||b){
            c=(a%10+b%10+c)/10;
            a=a/10;
            b=b/10;
            cont=cont+c;   
        }
        if(cont==0) printf("No carry operation.\n");
        else if(cont==1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",cont);
    }
    return 0;
}

