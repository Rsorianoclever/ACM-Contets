#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    int cont=1;
    while(t--){
        int n,a;
        int up=0,down=0;
        vector<int>v;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1])
                up++;
            else if(v[i]>v[i+1])
                down++;
        }
        cout<<"Case "<<cont++<<": "<<up<<" "<<down<<endl;
    }
    return 0;
}
