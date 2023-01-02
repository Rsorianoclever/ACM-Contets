#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
   freopen("in.txt","r",stdin);
   freopen("out.txt","w",stdout);
    bool mark=false;
    vector<int>v;
    vector<int>datos;
    int k,sum=0;
    int w=0;
    
    for(int i=0;i<100;i++){
        cin>>k;
        if(k==0){
            mark=true;
            break;
        } 
        v.push_back(k); 
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=1;j<=v[i]/2;j++){
            if(v[i]%j==0)datos.push_back(j);
        }
        for(int l=0;l<datos.size();l++)
            sum+=datos[l];
        for(int h=0;h<5;h++){
            int d=v[i]/(int)pow(10,h);
            if(d>0 && d<10){
                w=h+1;
                break;
            }
        }
        for(int o=0;o<5-w;o++)
            cout<<" ";
        cout<<v[i];
        if(sum<v[i])cout<<"  DEFICIENT"<<endl;
        else if(sum==v[i])cout<<"  PERFECT"<<endl;
        else cout<<"  ABUNDANT"<<endl;
        datos.clear();
        sum=0;
    }       
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}


