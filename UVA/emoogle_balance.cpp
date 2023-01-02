#include<iostream>
using namespace std;
int main(){
    int n,m;
    int cont=1;
    while(cin>>n){
        int a=0,b=0;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>m;
            if(m>0) a++;
            else b++;
        }
        cout<<"Case "<<cont++<<": "<<a-b<<endl;
     }
    return 0;
}
