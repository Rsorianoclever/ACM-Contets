#include<iostream>
using namespace std;
int main(){
    int t,h,n=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="donate"){
            cin>>h;
            n+=h;
        }
        else if(s=="report")
            cout<<n<<endl;
    }
    return 0;
}
