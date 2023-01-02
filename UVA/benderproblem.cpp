#include<iostream>
#include<cstdio>
using namespace std;
bool tras(char a,char b,char c){
    if(a=='x' && b=='-') return true;
    if(a=='y' && c=='y' && b=='+') return true;
    if(a=='z' && c=='z' && b=='+') return true;
    return false;
}
int main(){
    char a[3];
    int L;
    while(1){
        cin>>L;
        if(L==0) break;
        L--;
        int aux=1;
        char l='x';
        
        for(int i=0;i<L;i++){
            cin>>a;
            if(a[0]=='N') continue;
            if(tras(l,a[0],a[1]))aux=-aux;
            if(l=='x') l=a[1];
            else if(l=='y' && a[1]=='y') l='x';
            else if(l=='z' && a[1]=='z') l='x';
        }
        if(aux==1) cout<<'+';
        else cout<<'-';       
        cout<<l<<endl;
    }
    return 0;
}
