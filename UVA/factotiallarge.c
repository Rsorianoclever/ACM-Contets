#include<stdio.h>
#include<math.h>
int num[1000000];
int primos[78493];
int main(){
    int k,i,j,cont=0;
    primos[cont++]=2;
    
    for(k=4;k<1000000;k+=2)
        num[k]=1;
    for(i=3;i<1000000;i++){
        if(num[i]==0){
            primos[cont++]=i;
            for(j=i*i;j<1000000 && j>0;j+=i*2)
                num[j]=1;
        }
    }
    long long int a,aux;
    while(scanf("%lli",&a) && a>0){
        if(a<=0) break;
        aux=sqrt(a);
        for(i=0;i<78493 && primos[i]<=aux ;i++){
            while(a%primos[i]==0){
                printf("    %d\n",primos[i]);
                a=a/primos[i];
            }
        } 
        if(a!=1)
            printf("    %lli\n",a);
        printf("\n");
    }
    return 0;
}
