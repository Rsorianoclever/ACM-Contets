#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
queue<int>Q;
vector<int>color(205);
int A[205][205];
int n,l;
void bfs(){
    int B[205];
    bool bico=true;
    memset(B,0,sizeof B); 
    while(!Q.empty()){
        int nodo=Q.front();
        if(B[nodo]==0)
            B[nodo]=1;
        for(int i=0;i<n;i++){
            if(color[i]==1 && B[i]!=0)
                continue;
            if(A[nodo][i]==1){
                Q.push(i);
                if(B[i]==0){
                    B[i]=-B[nodo];
                }
                else{
                    if(B[i]==B[nodo]){
                        bico=false;
                        break;
                    }
                }
            }
        }
        if(bico==false)break;
        color[nodo]=1;
        Q.pop();
    }
    if(bico)cout<<"BICOLORABLE."<<endl;
    else cout<<"NOT BICOLORABLE."<<endl;
    while(!Q.empty()){
        Q.pop();
    }
    color.clear();
    for(int i=0;i<205;i++)
        color[i]=0;
    bico=true;
    memset(A,0,sizeof A);
    memset(B,0,sizeof B);
}
int main(){
    memset(A,0,sizeof A);
    while(cin>>n){
        if(n==0)break;
        cin>>l;
        int a,b;
        for(int i=0;i<l;i++){
            cin>>a>>b;
            A[a][b]=1;
            A[b][a]=1;
        }
        Q.push(0);
        bfs();
    }
    return 0;
}
