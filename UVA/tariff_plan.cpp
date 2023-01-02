#include<cstdio>
using namespace std;
int main(){
    int a,N,t[100],i,no=0,mi,ju;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&N);
        int mi=0,ju=0;
        for(i=0;i<N;++i){
            mi=mi+((t[i]/30)+1);
            scanf("%d",&t[i]);
            ju=ju+((t[i]/60+1));
        }
        mi=mi*10;
        ju=ju*15;
        if(mi<ju)
            printf("Case %d: Mile %d\n",++no,mi);
        else if(mi>ju)
            printf("Case %d: Juice %d\n",++no,ju);
        else 
            printf("Case %d: Mile Juice %d\n",++no,ju);
    }
    return 0;
}
