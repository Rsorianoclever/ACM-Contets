#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int n,a;
    cin>>n;
    while(n--){
        cin>>s;
        a=s.length();
        if(s=="1"||s=="4"||s=="78")
            cout<<"+"<<endl;
        else if(s[a-2]=='3' && s[a-1]=='5')
            cout<<"-"<<endl;
        else if(s[0]=='9' && s[a-1]=='4')
            cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;
         else cout<<"+"<<endl;    
    }
    return 0;
}
