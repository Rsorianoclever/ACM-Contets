#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double H,U,D,F;
    int dia=1;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)==4){
        if(H==0) break;
        double P=0.0;
        double aux=U*F/100.0;
        while(H>P){
            P=P+U;
            if(P>H) break;
            P=P-D;
            if(P<0) break;
            U=U-aux;
            dia++;
            if(U<0)U=0;
        }
        if(P>0)
        cout<<"success on day "<<dia<<endl;
        else cout<<"failure on day "<<dia<<endl;
        dia=1;  
    }
}
