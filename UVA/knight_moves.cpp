#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;

struct PAR{
    int x;
    int y;
};
string s1,s2;
int nivel[9][9];
bool matriz_adyac[9][9];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={-1,-2,-2,-1,1,2,2,1};
void bfs(int x1,int y1,int x2,int y2){
    queue<PAR>Q;
    PAR A,B;
    A.x=x1;
    A.y=y1;
    Q.push(A);
    nivel[x1][y1]=0;
    int X,Y;
    memset(matriz_adyac,false,sizeof matriz_adyac);
    while(!Q.empty()){
        A=Q.front();
        Q.pop();
        if(A.x==x2 && A.y==y2){ 
            cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<nivel[x2][y2]<<" knight moves."<<endl;
            return ;
        }
        for(int i=0;i<8;i++){
            X=A.x+dx[i];
            Y=A.y+dy[i];
            if(X>=1 && X<=8 && Y>=1 && Y<=8 && !matriz_adyac[X][Y]){
                matriz_adyac[X][Y]=true;
                nivel[X][Y]=nivel[A.x][A.y]+1;
                B.x=X;
                B.y=Y;
                Q.push(B);
            }
        }
        
    }
    
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int x1,x2,y1,y2;
    while(cin>>s1>>s2){
        x1=s1[0]-'a'+1;
        y1=s1[1]-'0';
        x2=s2[0]-'a'+1;
        y2=s2[1]-'0';
    
        bfs(x1,y1,x2,y2);
    }
    return 0;
}
