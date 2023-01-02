#include<string.h>
#include<stdio.h>
int main()
{   int r,n,i;
    char v[101];
	scanf("%d",&r);
	for(i=0;i<r;i++)
    {	
		scanf("%s",&v);
		n=strlen(v);
		if(((v[n-1]-48)+10*(v[n-2]-48))%4==0)
        printf("YES\n");
        else printf("NO\n");
	    }
return 0;
}
