#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--){
        int v[11];
        int A[11];
        int B[11];
        int cont1=0,cont2=0;
        for(int i=0;i<10;i++){
            cin>>v[i];
            A[i]=v[i];
            B[i]=v[i];
        }
        sort(A,A+10);
        sort(B,B+10);
        reverse(B,B+10);
        for(int i=0;i<10;i++){
            if(v[i]==A[i])
                cont1++;
            if(v[i]==B[i])
                cont2++; 
        }
        if(cont1==10||cont2==10)
            cout<<"Ordered"<<endl;       
        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
