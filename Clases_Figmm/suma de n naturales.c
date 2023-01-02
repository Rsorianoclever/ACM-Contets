/*falta definir que el cero y los negativos no son naturales*/
#include<stdio.h>
main()
{ 
    printf("    SUMA DE NUMEROS NATURALES\ningrese el numero de naturales que se desea sumar: \n");
    int n,i,suma;
    scanf("%d",&n);
    while(n!=0)
    {
        i=0;
        suma=0;
        for(i=0;i<=n;i=i+1)
        suma=suma+i;
        printf("la suma de los primeros %d numeros naturales es: %d\n\ningrese el numero de naturales que se desea sumar: \n ",n,suma);
        scanf("%d",&n);
    }
    getch();
}
