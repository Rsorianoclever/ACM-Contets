#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,m,c,k;
    int cont=0;
    int amp=0;
    int max;
    bool blown=false;
    while(cin>>n>>m>>c){
        cont++;
        if(n==0)  
            break;
        amp=0;
        max=0;
        blown=false;
        int A[100][2];
        memset(A,0,sizeof A);
        for(int i=0;i<n;i++)
            cin>>A[i][0];
        for(int j=0;j<m;j++){
            cin>>k;
            if(A[k-1][1]==0){
                amp=amp+A[k-1][0];
                A[k-1][1]=1;
            }
            else{
                amp=amp-A[k-1][0];
                A[k-1][1]=0;
            }
            if(amp>=max)
                max=amp;    
            if(amp>c){
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    	   blown=true;
                break;
            }
        }
        cout<<"Sequence "<<cont<<endl;
        if(blown==false){
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
        }
        else
            cout<<"Fuse was blown."<<endl;
        cout<<endl;
    }
    return 0;
}
