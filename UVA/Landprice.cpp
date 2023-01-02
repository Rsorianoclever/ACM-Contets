#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
    int t,n;
    scanf("%d",&t);
    while(t--){
        vector<int> ar;
        while(scanf("%d",&n)!=EOF){
            if(n==0) break;
            ar.push_back(n);
         }
        sort(ar.begin(),ar.end());
        reverse(ar.begin(),ar.end());
        int sum=0;
        bool ok=true;
        for(int i=0;i<ar.size();i++){
            sum=sum+(2*pow(ar[i],1+i));
            if(sum>50000000){
                ok=false; break;
            }
        }
        if(ok)cout<<sum<<endl   ;
        else cout<<"Too expensive"<<endl;
    }
}
