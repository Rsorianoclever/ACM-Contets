#include<iostream>
using namespace std;
int main(){
    int t,n,max;
    cin>>t;
    int A[101];
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>A[j];
        max=A[0];
        for(int k=1;k<n;k++){
            if(max<=A[k])
                max=A[k];      
        }
        cout<<"Case "<<i+1<<": "<<max<<endl;
     }
}

