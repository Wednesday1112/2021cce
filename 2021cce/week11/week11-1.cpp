#include <stdio.h>
int a[10000000];
int main()
{
	int m,i,k;
	scanf("%d",&m);
	///int ans=0;
	for(i=2;i<m;i++)
	{
		if(a[i]==0)
		{
			///ans++;
			printf("%d ",i);
			for(k=i+i;k<m;k+=i)
		    {
                a[k]=1;
		    }
		}
	}
	///printf("%d\n",ans);
}
