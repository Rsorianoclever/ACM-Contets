#include<iostream>
#include<vector>
using namespace std;
int sum(int i,int j){


}
int main(){
    int a,max=0;
    cin>>a;
    int A[102][102];
    for(int i=0;i<a;i++)
        for(int j=0;j<a;j++)
            cin>>A[i][j];
    for(int i=1;i<=a;i++)
        for(int j=1;j<=a;j++)
            if(max<sum(i,j))
                max=sum(i,j);
    cout<<max<<endl;
    return 0;
}
