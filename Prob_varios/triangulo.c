#include<stdio.h>
#include<math.h>

float distancia(int x0,int x1,int y0,int y1)
{
	float d;
	d=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
	return d;	// para retornar un valor(respuesta)
}
int main()
{
	int x1, x2, x3, y1, y2, y3;
	scanf("&d &d &d &d &d &d",&x1,&x2,&x3,&y1,&y2,&y3);
	float a,b,c;
	//a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//sqrt raiz cuadrada
	a=distancia(x1,x2,y1,y2);
	//a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	b=distancia(x2,x3,y2,y3);
	//a=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	c=distancia(x3,x1,y3,y1);
	float p=(a+b+c)/2;
	float S;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("el area es: %f\n",S);
	return 0;

}

