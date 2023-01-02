#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int cal(int a,int i){
    
    if(a>=pow(10,i)) return cal(a,i+1);
    else return i;
}
int main(){
        long long int a,b;
    while(scanf("%lld %lld",&a,&b)==2){
        int cont=0;
        if(a==0||b==0)break;
        int min,max;
        if(a>=b){max=a;min=b;}
        else{min=a;max=b;}
        int n=cal(max,1);
        //cout<<pow(10,n)<<endl;
        //cout<<n<<endl; 
        //cout<<a<<" "<<b<<endl;
        for(int i=1;i<=n+1;i++){
            if((a%int(pow(10,i))+b%int(pow(10,i)))>=pow(10,i))
                cont++;
        }
        if(cont==0) cout<<"No carry operation."<<endl;
        else if(cont==1) cout<<"1 carry operation."<<endl;
        else cout<<cont<<" carry operations."<<endl;
    }
}

