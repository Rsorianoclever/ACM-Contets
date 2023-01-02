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
        if(a==5)
            cout<<"3"<<endl;      
        else{
            if(s[0]=='o' && s[1]=='n' && s[2]=='e') cout<<"1"<<endl;
            else if(s[0]=='o' && s[1]=='n') cout<<"1"<<endl;
            else if(s[0]=='o' && s[2]=='e') cout<<"1"<<endl;
            else if(s[1]=='n' && s[2]=='e') cout<<"1"<<endl;
            else if(s[0]=='t' && s[1]=='w') cout<<"2"<<endl;
            else if(s[0]=='t' && s[2]=='o') cout<<"2"<<endl;
            else if(s[1]=='w' && s[2]=='o') cout<<"2"<<endl;
            }
    }
    return 0;
}
