#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

int A[40];
vector<int>adj[40];
void dfs(int nodo){
    A[nodo]=1;
    for(int i=0;i<adj[nodo].size();i++){
        int v=adj[nodo][i];
        if(A[v]==0)
            dfs(v);
    }
    
    return ;
}
int main(){
    int P,n,cont;
    char S[3];
    cin>>P;
    scanf("\n");
    while(P--){
        gets(S);
        n=S[0]-'A';
        memset(A,0,sizeof A);
        for(int i=0;i<=n;i++)
            adj[i].clear();
        while(gets(S) && S[0]){ 
            adj[S[0]-'A'].push_back(S[1]-'A');
            adj[S[1]-'A'].push_back(S[0]-'A');
        }
        cont=0;
        for(int j=0;j<=n;j++){
            if(A[j]==0){
                dfs(j);
                cont++;
            }
        }
        cout<<cont<<endl;
        if(P)
        cout<<endl;
    }
    return 0;
}
