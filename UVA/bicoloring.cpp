#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cstring>
using namespace std;
int A[200][200];
vector<int>color(200);
int n;
void dfs(int nodo){
    color[nodo]=1;
    cout<<"("<<nodo+1;
    for(int i=0;i<n;i++){
        if(A[nodo][i]==1 && color[i]==0)
            dfs(i);
    }
    color[nodo]=2;
    cout<<")";
}
int main(){
    int l;
    int a,b;
    while(cin>>n>>l){
            
        for(int i=0;i<100;i++){
            for(int j=0;j<200;j++)
                A[i][j]=0;
        }
        //cin>>n>>l;
        //memset(A,false,sizeof A);
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            A[a][b]=1;
            A[b][a]=1;
        }
        for(int j=0;j<n;j++){
            if(color[j]==0)
                dfs(j);
        }
        cout<<endl;
    }
    return 0;
}
