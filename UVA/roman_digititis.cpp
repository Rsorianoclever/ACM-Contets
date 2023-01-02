#include<iostream>
#include<cstring>
#include<map>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    int a;
    string num[]={"c","xc","l","xl","x","ix","v","iv","i"};
    char rom[]={'c','l','x','v','i'};
    int valores[]={100,90,50,40,10,9,5,4,1};
    while(cin>>a){
        if(a==0)break;
        map<char ,int>dic;
        for(int i=1;i<=a;i++){
            int b=i;
            string cadena="";
            for(int j=0;j<9;j++){
                int div=b/valores[j];
                b = b%valores[j];
                for(int u=0;u<div;u++){
                    cadena+=num[j];
                }
            }
            for(int h=0;h<cadena.size();h++)
                dic[cadena[h]]++;
        }
        cout<<a<<": ";
        for(int i=4;i>=0;i--){
            if(i!=0)
                cout<<dic[rom[i]]<<" "<<rom[i]<<", ";
            else
                cout<<dic[rom[i]]<<" "<<rom[i];
        }
        cout<<endl;
    }
    return 0;
}
