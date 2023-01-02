#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    if(540>a || a>1520)
    {
        printf("error");
    }
    else
    {
        if(540<=a && a<580)
        {
            k=580-a;
            printf("adelante %d",k);
        }
        if(580<a && a<980)
        {
            b=a-580;
            c=980-a;
            if(b<c)
            {
                printf("atras %d",b);
            }
            else
            {
                printf("adelante %d",c);
            }
        }
       if(980<a && a<1190)
        {
            d=a-980;
            e=1190-a;
            if(d<e)
            {
                printf("atras %d",d);
            }
            else
            {
                printf("adelante %d",e);
            }
        }
        if(1190<a && a<1250)
        {
            f=a-1190;
            g=1250-a;
            if(f<g)
            {
                printf("atras %d",f);
            }
            else
            {
                printf("adelante %d",g);
            }
        }
        if(1250<a && a<1420)
        {
            h=a-1250;
            i=1420-a;
            if(h<i)
            {
                printf("atras %d",h);
            }
            else
            {
                printf("adelante %d",i);
            }
        }  
        if(1420<a && a<=1520)
        {
            j=a-1420;
            printf("atras %d",j);
         }
    }
  return 0;
}
