//#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstdio>
using namespace std;
vector<int>A;
void insert(int n, int p){
    if(A[p]>n){
        if(A[2*p+1]==0)
            A[2*p+1]=n;
        else
            insert(n,2*p+1);
    }
    else{
        if(A[2*p+2]==0)
            A[2*p+2]=n;    
        else
            insert(n,2*p+2);
    }
}
void imprime(int p){
    if(A[2*p+1]!=0)
        imprime(2*p+1);
    printf("%d\n",A[p]);
    //cout<<A[p]<<" ";
    if(A[2*p+2]!=0)
        imprime(2*p+2);
}
int main(){
    freopen("in.txt","r",stdin);
    int root,n;
    scanf("%d",&root);
    A[0]=root;
    while(scanf("%d",&n)==1){
        insert(n,0);
    }
    for(int i=0;i<30;i++)
        printf("%d ",A[i]);
        //cout<<A[i]<<" ";
    printf("\n");
    //cout<<endl;
    imprime(0);
    printf("\n");
    //cout<<endl;
    return 0;
}
