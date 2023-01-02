#include<iostream>
using namespace std;
int main(){
    string s;
    int cont=1;
    while(cin>>s){
       if(s=="*")
            break;
        else if(s=="Hajj"){
            cout<<"Case "<<cont++<<": ";
            cout<<"Hajj-e-Akbar"<<endl;
            }
        else if(s=="Umrah"){
            cout<<"Case "<<cont++<<": ";
            cout<<"Hajj-e-Asghar"<<endl;
            }
    }
    return 0;
}
