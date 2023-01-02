#include<stdio.h>
int main()
{
	int h,m;
	while(1)
	{
		while(2)
        {
            if(h==0 && m==0)
                break;
            scanf("%d : %d", &h, &m);
            float alfa, beta;
            alfa=(30*h)%360+m/2;
            beta=(6*m);
            float angulo;
            angulo=alfa-beta;
            if (angulo<0)
            angulo=angulo*-1;
            if (angulo>360-angulo) 
            angulo=360-angulo;
            int N=angulo*10000;
            if(N%10>>5)
                N++;
            angulo=N/10000;
            printf("%.3f\n",angulo);  //hace 2(entes del punto) enteros y 3 decimales
        }
    }
    getch();
}
