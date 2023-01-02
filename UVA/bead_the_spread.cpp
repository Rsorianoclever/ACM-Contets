#include<iostream>
using namespace std;
int main(){
    long int n,s,d,a,b;
    cin>>n;
    while(n--){
        cin>>s>>d;
        if((s%2==0 && d%2!=0)||(d%2==0 && s%2!=0)){
            cout<<"impossible"<<endl;
            continue;}
        a=(s+d)/2;
        b=(s-d)/2;     
        if(a>=0 && b>=0)cout<<a<<" "<<b<<endl;
        else cout<<"impossible"<<endl;
       
    }
    return 0;
}
