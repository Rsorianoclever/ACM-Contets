#include<iostream>
#include<cstring>
//#include<utility>
using namespace std;
int malla[1025][1025];
int main(){
    int i,d,r,x,y,ratas;
    cin>>i;
    while(i--){
        memset(malla,0,sizeof malla);
        cin>>d>>r;
        for(int j=0;j<r;j++){
            cin>>x>>y>>ratas;
            for(int u=x-d;u<=x+d;u++)
                for(int v=y-d;v<=y+d;v++){
                    if(u>=0 && u<=1024 && v>=0 && v<=1024)
                    malla[u][v]+=ratas;
                    }
        }
        int max=0;
        for(int u=0;u<=1024;u++)
            for(int v=0;v<=1024;v++){
                if(max<malla[u][v]){
                    max=malla[u][v];
                    x=u;y=v;
                }  
            }        
       cout<<x<<" "<<y<<" "<<max<<endl; 
    }
    return 0;
}
