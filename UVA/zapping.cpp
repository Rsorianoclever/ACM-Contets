#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==-1 && b==-1)
            break;
        if(abs(b-a)<100-abs(b-a))
            cout<<abs(b-a)<<endl;
        else
            cout<<100-abs(b-a)<<endl;
    }
    return 0;
}
