#include<iostream>
#include<string>
using namespace std;
string c;
int sum=0;
int sum_again(int d){
    if(d<10)
        return d;
    else{
        d=d%10+d/10;
        return sum_again(d);
    }
}
int sum_dig(string n){
    int x=n.length();
    for(int i=0;i<x;i++)
        sum=sum+n[i]-48;
    return sum_again(sum);   
}
int main(){
    while(cin>>c){
        if(c[0]=='0')
            return 0;
        cout<<sum_dig(c)<<endl;
        sum=0;
    }
}
