#include<iostream>
#include<cstring>
int dx[]={-1,0,1,-1,0,1,-1,1};
int dy[]={-1,-1,-1,1,1,1,0,0};
using namespace std;
int main(){
    int n,m;
    int cont=0;
    while(cin>>n>>m){
        if(n==0)break;
        cont++;
        char A[105][105];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>A[i][j];
                if(A[i][j]=='.')
                    A[i][j]='0';
                }
        }
        int X=0,Y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]=='*'){
                    for(int h=0;h<8;h++){
                        X=i+dx[h];
                        Y=j+dy[h];
                        if(X>=0 && X<m && Y>=0 && Y<n && A[X][Y]!='*')
                            A[X][Y]++;        
                    }
                    
                    
                }
            }
        }
        //comprobando;!!!
        cout<<"Field #"<<cont<<":"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<A[i][j];
            cout<<endl;
        }
    }
    return 0;
}
/****solucion::::::::::::>>>>>>>>
#include <stdio.h>
int main()
{
	int i,j,k,r,c,z;
	char dy[] = {1,-1,0,0,1,1,-1,-1};
	char dx[] = {0,0,1,-1,-1,1,-1,1};
	char f[105][105];
	z = 0;
	scanf("%d %d",&r,&c);
	while(r||c)
	{
		getchar();
		if(z)
			putchar('\n');
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				f[i][j]=getchar();
				if(f[i][j]=='.')
					f[i][j]='0';
			}
			getchar();
		}
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(f[i][j]=='*')
					for(k=0;k<8;k++)
						if(i+dx[k]>=0&&i+dx[k]<r&&j+dy[k]>=0&&j+dy[k]<c&&f[i+dx[k]][j+dy[k]]!='*')
							f[i+dx[k]][j+dy[k]]++;
		printf("Field #%d:\n",++z);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				putchar(f[i][j]);
			putchar('\n');
		}
		scanf("%d %d",&r,&c);
	}
	return 0;
}*/
