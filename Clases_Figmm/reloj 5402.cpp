#include<stdio.h>
int main()
{
	int h,m;
	while(1)
	{
		while(2)
        {
            scanf("%d : %d", &h, &m);
            if(h=0 && m=0)
                break;
            float alfa, beta;
            alfa=(30*h)%360+m/2;
            beta=(6*m);
            float angulo;
            angulo=alfa-beta;
            if (angulo<0)
            angulo=angulo*-1;
            if (angulo>360-angulo) 
            angulo=360-angulo;
            printf("%.3f\n",angulo);  //hace 2(entes del punto) enteros y 3 decimales
        }
	}
getch();
}
