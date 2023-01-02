#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++){
       cin>>a>>b>>c;
       printf("Case %d:",i+1);
       cout<<" ";
       int max=fmax(a,fmax(b,c));
       int min=fmin(a,fmin(b,c));
       if(a!=max && a!=min)cout<<a<<endl;
       if(b!=max && b!=min)cout<<b<<endl;
       if(c!=max && c!=min)cout<<c<<endl;      
    }
}
