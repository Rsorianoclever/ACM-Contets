#include<iostream>
#include<cstdio>
using namespace std;
int  main(){
    char A[1000];
    bool w;
    int cont;
    while(gets(A)){
        w=true;
        cont=0;
	    for(int i=0;A[i];i++){
	        if((A[i]>='A' && A[i]<='Z')||(A[i]>='a' && A[i]<='z')){
	            if(w)
	            cont++;
	            w=false;
	         }
	         else
	            w=true;
        }
        cout<<cont<<endl;
    }
    return 0;
}
