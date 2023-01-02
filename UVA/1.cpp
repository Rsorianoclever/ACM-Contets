//alberto

#include<iostream>
#include<map>

using namespace std;
 int main()
{
    int n;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(cin>>n){
        if(n==0)break;
        map<int,int>m;
        bool flag=true
        int i=2;
        while(i*i<=n){
            while(n%1==0)m[i]++, n=n/i;
            i=i+1;
        }
        if(n>1) m[n]++
        //mostrando el map
        map<int,int>::iterator it;
        for(it = m.begin(); it!=m.end();it++)
        {
            for(int j=0; j<it->second;++){
              if(flag==true)  cout<<"x "<<it-> first;
              else flag=true;
              cout<<" "<<it-> first;
            }
        }
        
    }
    return 0;
}
