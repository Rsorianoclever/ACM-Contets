#include<iostream>
using namespace sstd;
int c[1000000]
void merge(int a[1000000],int i,int m,int j){
     int p1=i,p2=m+1;
     int nc=0;
     while(p1<=m && p2<=j){
         if(a[p1]<a[p2]){
             c[nc]=a[p1];
             nc++;
             p1++;
         }
         else{
              c[nc]=a[p2];
              nc++;
              p2++;
         }            
     }
     while(p1<=m){
         c[nc]=a[];
         nc++;
         p1++;
     }
     while(p2<=j){
         c[nc]=a[];
         nc++;
         p2++;
     }
     for(int;;){
     
     }

}
void merge_sort(int a[100],int i,int j){
     if(i<j){
         int m=(i+j)/2;
         merge_sort(a,i,j);
         merge_sort(a,m+1,j);
         merge(a,i,m,j);
     }     
}
int a[1000000];
int main(){
    int n;
    cin>>n;
    for(;;)
    
    
    
    cout<<;
}
