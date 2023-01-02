#include<stdio.h>
main()
{
    printf("    SUMA + \ningrese los dos numeros a sumar:\n");
    int a,b,c;
    scanf("%d""%d" ,&a,&b);
    while(a!=0&&b!=0)
    {
        c=a+b;
        printf("RESPUESTA: %d+%d=%d\n\ningrese los dos nuevos numeros a sumar:\n",a,b,c);
        scanf("%d""%d" ,&a,&b);
    }
    getch();

}
      
