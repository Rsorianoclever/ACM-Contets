#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,k;
    while(scanf("%d %d",&n,&k)==2 && k>1){
        int a=n;
        int sum=0;
        while(a>=k){
            sum=sum+a/k;
            a=a/k+a%k;
        }
        sum=sum+n;
       cout<<sum<<endl; 
    }
    return 0;
}

