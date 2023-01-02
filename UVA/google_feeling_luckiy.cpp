#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;
struct dic{
    string s;
    int a;
};
int main(){
    int t,cont=1;
    cin>>t;
    while(t--){
        int b,max=0;
        dic X;
        vector<dic>v;  
        string c;
        for(int i=0;i<10;i++){
            cin>>c>>b;
            X.s=c;
            X.a=b;
            v.push_back(X);
            if(max<b)
                max=b;
         }
         cout<<"Case #"<<cont++<<":"<<endl;
         for(int i=0;i<10;i++){
            if(v[i].a==max)
                cout<<v[i].s<<endl;
         }        
    }
    return 0;
}
