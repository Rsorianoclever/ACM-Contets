#include<iostream>
using namespace std;
/*
                    a[i]
             a[2*i]    a[2*i+1]   
*/
void swap(int a,int i){
     int aux;
     aux=a;
     a=i;
     i=aux; 
     }
void heapify(int a[100],int i,int n){
     int pos=i;
     if(2*i<=n && a[i]<a[2*i])
          pos=2*i;                      
     if(2*i+1<=n && a[pos]<a[2*i+1])
          pos=2*i+1;
     swap(a[i],a[pos]);
     if(pos!=i)
          heapify(a,pos,n);
        
}
void build_heap(int a[100],int n){
     for(int i=n/2;i>=0;i--){
             heapify(a,i,n); 
     }
}
int main(){
    
    int a[100]={4,1,3,2,16,9,10,14,8,7};
    int n=10;
    build_heap(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;  
}
