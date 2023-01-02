#include<stdio.h>
int main(){
    long N,B,H,W,i,p,a,j,cost;
    long ac=15000000;
    while(scanf("%ld %ld %ld %ld",&N,&B,&H,&W)==4){
        for(i=0;i<H;i++){
            scanf("%ld",&p);
            for(j=0;j<W;j++){
                scanf("%ld",&a);
                cost=0;
                if(a>=N){
                    cost=N*p;
                    if(ac>cost)
                    ac=cost;
                 }
            }
        }
        if(ac>B) printf("stay home\n");
        else printf("%ld\n",ac);  
        ac=15000000;
    }
    return 0;
}
