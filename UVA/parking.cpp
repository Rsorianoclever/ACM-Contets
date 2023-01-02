#include <cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t,n,vl;
    cin>>t;
    while(t--){
        cin>>n;
        int max=0,min=100;
        while(n--){
            cin>>vl;
            if(vl>max)
                max=vl;
            if(vl<min)
                min=vl;
        }
        cout<<2*(max-min)<<endl;
    }
    return 0;
}
