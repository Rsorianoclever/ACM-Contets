/*  aun falta definir el factorial de 0 y el factorial para numeros negativos */
#include<stdio.h>
main()
{
    printf("    FACTORIAL x!\n\ningrese el numero a calcular:\n");
     int a,b;
       scanf("%d",&a);
       if (a!=0)
       {
           while(a!=0)
           {
                int c=1;
                for(b=1;b<=a;b=b+1)
                {
                      c=c*b;
                }
                printf("el factorial de %d es: %d\n\ningrese el siguiente numero a calcular:\n",a,c);
                scanf("%d",&a);
           }
       }
         else
       {
            int c=1;
            printf("%d\n",c);
        }
getch();
}


