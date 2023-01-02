#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        n=(((n*63+7492)*5-498)%100)/10;
        if(n<0)n=-n;
        cout<<n<<endl;
    }
    return 0;
}
