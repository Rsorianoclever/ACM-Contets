#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    double n,p;
    double ass;
    while(scanf("%lf%lf",&n,&p)==2){
    ass=pow(p,1/n);
    printf("%.0lf\n",ass);
    }
return 0;
}
