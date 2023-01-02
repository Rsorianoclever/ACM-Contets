#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        n=(int) (n/3);
        m=(int) (m/3);
        cout<<n*m<<endl;
    }
    return 0;
}
