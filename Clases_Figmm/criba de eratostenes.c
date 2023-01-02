#include<stdio.h>
main()
{
      printf("CRIBA DE ERATOSTENES!!!!!!\n");
      int m,n,p,a,b;
      scanf("%d %d",&m,&n);
      for(p=m;p<=n;p++)
      {
           a=2;
           b=1;
           while(a<=p)
           {
                 if(p%a==0)
		         {
                     b=b+1;
		         } 
	             a=a+1;
           }     
           if(b==2)
		   {
		         printf("%d\n",p);
           }          
      }    
      getch();   
}
