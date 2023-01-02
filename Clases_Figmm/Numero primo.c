#include<stdio.h>
main()
{
    printf("    ES PRIMO??\ningrese en numero:\n");
    int i,a,n,b;
    b=1;
    a=2;
    scanf("%d",&n);
   // for(i=1;i<=10;i++)
   // {
        while(a<=n)
        {
            if(n%a==0)
            {
                b=b+1;
            } 
            a=a+1;
        }
        if(b==2)
        {
            printf("este numero es primo\n");
        }
        if(b!=2)
        {
            printf("este numero no es primo\n");
        }
        scanf("%d",&n);
  //  }
    getch();
}

