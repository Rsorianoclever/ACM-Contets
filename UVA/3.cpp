#include<iostream>
#include<string>
#include<stdio.h>

//using namespace std;
int fibo(int i);
int main(){
    int m;
    cin>>m;
    cout<<
    scanf("%d",&m);
   printf("%d",fibo(m-1));
    
}
int fibo (int i){
    if(i==0) return 1;
    if(i==1) return 1;
    else  return fibo(i-1)+ fibo(i-2); 
    i--;
}
