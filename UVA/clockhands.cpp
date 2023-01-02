#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double H,M;
    while(scanf("%lf:%lf",&H,&M)==2){
        if(H==0)break;
        double alfa;
        alfa=H*30-11*M/2.00;
        if(alfa<0)alfa=-alfa;
        if(alfa>180)alfa=360-alfa;
        printf("%.3lf\n",alfa);
    }
    return 0;
}
