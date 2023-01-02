#include<iostream>
#include<algorithm>
using namespace std;
int axp(int z);
int main(){
    int a,b,h;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        int A[b-a+1];
        for(int j=0,h=a;j<b-a+1,h<=b;j++,h++){
            A[j]=axp(h);
        }
        sort(A,A+b-a+1);
        reverse(A,A+b-a+1);
        cout<<A[0]<<endl;
    }
    return 0;
}
int axp(int z){
    int i=1;
    while(z>1){
        if(z%2==0){
        i++;z=z/2;}
        else{
        i++;z=z*3+1;}
    }
    return i;
}
