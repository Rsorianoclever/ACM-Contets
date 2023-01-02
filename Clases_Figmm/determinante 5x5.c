#include<stdio.h>
int det3(int a1,int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3);
int det4(int a1,int b1,int c1,int d1,int a2,int b2,int c2,int d2,int a3,int b3,int c3,int d3,int a4,int b4,int c4,int d4);
int main()
{
    int A1,B1,C1,D1,E1,A2,B2,C2,D2,E2,A3,B3,C3,D3,E3,A4,B4,C4,D4,E4;
    int a,b,c,d,e,DET;
    float X,Y,W,Z;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&A1,&B1,&C1,&D1,&E1,&A2,&B2,&C2,&D2,&E2,&A3,&B3,&C3,&D3,&E3,&A4,&B4,&C4,&D4,&E4);
    DET=det4(A1,B1,C1,D1,A2,B2,C2,D2,A3,B3,C3,D3,A4,B4,C4,D4);
    a=det4(E1,B1,C1,D1,E2,B2,C2,D2,E3,B3,C3,D3,E4,B4,C4,D4);
    b=det4(A1,E1,C1,D1,A2,E2,C2,D2,A3,E3,C3,D3,A4,E4,C4,D4);
    c=det4(A1,B1,E1,D1,A2,B2,E2,D2,A3,B3,E3,D3,A4,B4,E4,D4);
    d=det4(A1,B1,C1,E1,A2,B2,C2,E2,A3,B3,C3,E3,A4,B4,C4,E4);
    X=a/DET;
    W=b/DET;
    Y=c/DET;
    Z=d/DET;
    printf(".0%f .0%f .0%f .0%f",X,W,Y,Z);
    getch();
    return 0;
}
int det4(int A1,int B1,int C1,int D1,int A2,int B2,int C2,int D2,int A3,int B3,int C3,int D3,int A4,int B4,int C4,int D4)
{   
    int a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,a3,b3,c3,d3,e3,a4,b4,c4,d4,e4;
	int x;
	x=a1*det3(b2,c2,d2,b3,c3,d3,b4,c4,d4)-a2*det3(b1,c1,d1,b3,c3,d3,b4,c4,d4)+a3*det3(b1,c1,d1,b3,c3,d3,b4,c4,d4)-a4*det3(b1,c1,d1,b2,c2,d2,b3,c3,d3);
	return (x);
}
int det3(int A1,int B1,int C1,int A2,int B2,int C2,int A3,int B3,int C3)
{
    int a1,b1,c1,a2,b2,c2,a3,b3,c3;
    int x;
    x=a1*b2*c3+a3*b1*c2+a2*b3*c1-a3*b2*c1-a1*b3*c2-a2*b1*c3;
    return (x);
}
    
