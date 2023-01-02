#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int A[4500];
    int B[4500];
    B[0]=1;
    int cont=0;
    A[0]=1;
    A[1500]=1;
    A[3000]=1;
    for(int i=1;i<1500;i++){
        A[i]=2*i;
        A[i+1500]=3*i;
        A[i+3000]=5*i;
    }
    sort(A,A+4500);
    for(int i=0;i<4500;i++){
        
        if(A[i]==B[cont])
            continue;
        else{
            cont++;
            B[cont]=A[i];
            }
    }
    for(int i=1;i<1500;i++){
        //cout<<B[i]<<" ";
    }
    cout<<"The 1500'th ugly number is "<<B[1500]<<".";
    return 0;
}
