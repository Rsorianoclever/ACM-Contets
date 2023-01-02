//900 uva.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(500);
    v[0]=1; v[1]=1;
    for(int i=2;i<500;++i){
        v[i]=v[i-1]+v[i-2];
    }
    int n;
   while(cin>>n){
    if(n==0)break;
    cout<<v[n]<<endl;
    }
 //   system("pause");
    return 0;
}
