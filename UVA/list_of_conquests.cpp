#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>entrada;
    map<string,int>dic;
    string a,b;
    while(n--){
        cin>>a;
        getline(cin,b);
        if(dic[a])dic[a]++;
        else{
            dic[a]++;
            entrada.push_back(a);
        }
    }
    sort(entrada.begin(),entrada.end());
    for(int i=0;i<entrada.size();i++){
        string c=entrada[i];
        cout<<c<<" "<<dic[c]<<endl;
    }  
    entrada.clear();
    return 0;     
}

