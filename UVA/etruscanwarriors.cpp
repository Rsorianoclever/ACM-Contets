#include <stdio.h>
#include <math.h>

int main()
{   int j,cases;
    long sum;
    scanf("%d",&cases);
    for(j=0;j<cases;j++){
        scanf("%ld",&sum);
        printf("%ld\n",(long)((-1+sqrt(1+8*sum))/2.0));
    }
    return 0;
}
