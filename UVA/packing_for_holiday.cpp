#include<iostream>
using namespace std;
int main(){
    int t,cont=1;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"Case "<<cont++<<": ";
        if(a<=20 && b<=20 && c<=20)
            cout<<"good"<<endl;
        else 
            cout<<"bad"<<endl;     
    }
    return 0;
}
