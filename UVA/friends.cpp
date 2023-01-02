#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int A[30001];
vector<int>adj[500];
int n,cont;
void dfs(int nodo){
    A[nodo]=1;
    for(int i=1;i<=adj[nodo].size();i++){
        int v=adj[nodo][i];
        if(A[v]==0){
            dfs(v);
            cont++;       
        }
    }
}
int main(){
    int k,max;
    cin>>k;
    while(k--){
        cont=1;
        max=0;
        memset(A,0,sizeof A);
        int m,x,y;
        cin>>n>>m;  
        for(int i=0;i<m;i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            if(A[i]==0){
                dfs(i);
                if(max<cont)
                   max=cont;
                cont=1;
            }
        }
       cout<<max<<endl;
    }
    return 0;
}
