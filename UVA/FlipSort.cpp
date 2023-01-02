#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){ 
    int A[n];
    int cont=0;
    for(int i=0;i<n;i++){
         cin>>A[i];     
    } 
    for(int j=n-1;j>=1;j--){
      for(int i=j-1;i>=0;i--){
         if(A[j]<A[i]){
             cont++;  
             }
         }
      }
      cout<<"Minimum exchange operations : "<<cont<<endl;;
    }
   
}
