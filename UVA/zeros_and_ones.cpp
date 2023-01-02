#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int cont=1;
    while(cin>>s){    
        int h;
        cin>>h;
        cout<<"Case "<<cont++<<":"<<endl;
        while(h--){
            int i,j,aux;
            bool order=false;
            cin>>i>>j;
            if(i>j)swap(i,j);
            aux=s[i];
            for(int x=i+1;x<=j;x++)
                if(aux!=s[x]){
                    order=true;
                    break;
                }
            if(order)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
         }
          
    }
    return 0;
}
