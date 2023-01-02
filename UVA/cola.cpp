#include<iostream>
using namespace std;
int main(){
    int n,a,aux=4;
    while(cin>>n){
        a=n;
        int cont=0;
        while(aux>=3){
            aux=a/3+a%3;
            cont+=a/3;
            a=aux;
            if(aux==2)
                cont++;
        }
        cout<<cont+n<<endl;
        cont=0;
        aux=4;
    }
    return 0;
}
