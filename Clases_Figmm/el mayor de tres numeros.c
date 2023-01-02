#include<stdio.h>
main()
{
    printf("    EL MAYOR DE TRES NUMEROS\ningrese los numeros:\n");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
while(a!=0)
{
	int mayor=a;
	if(a<=b)
    	{
		mayor=b;
		if(b<=c)
		{
            mayor=c;
        }
    }
	else
	{
        if(a<=c)
        {
            mayor=c;    
        }
    }	
    printf("el mayor de los numeros es:\t%d\n",mayor);
    scanf("%d%d%d",&a,&b,&c);
}
    getch();
} 
