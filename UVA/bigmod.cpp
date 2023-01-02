#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int square(int x)
{   
    return x*x;
}
int bigmod(int n,int p, int m){
    if(p==0) return 1;
    if(p==1) return n%m;
    if(p%2==0) return square(bigmod(n,p/2,m)%m);
    else return n*bigmod(n,p-1,m)%m;
}
int main()
{
    int n,p,m;
    while(cin>>n>>p>>m){
        cout<<bigmod(n,p,m)<<endl;
    }
    return 0;
}


