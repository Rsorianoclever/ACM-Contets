#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
   // freopen("in.txt","r",stdin);
    //freeopen("out.txt","w",stdout);
    int N,bud,ropa,price;
    while(cin>>N){
        for(int i=0;i<N;i++){
            cin>>bud<<ropa;
            vector<int>Q;
            vector<vector<int>>A(ropa);
            for(int j=0;j<ropa;j++){
            cin>>price;
            A[j].push_back(price);
            }
        }
        for(h=0;h<A.size();h++){
            for(int j=0;j<A[h].size();j++)
                cout<<A[h].[j]<<" ";
            cout<<endl;    
        }
    }
    return 0;
}
