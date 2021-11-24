#include <stdio.h>
int a[10000000];
int main()
{
	int Q,i,k;
	printf("請問你想要幾個質數? (最大的質數不超過10000000, 請給小一點) ");
	scanf("%d",&Q);
	int ans=0;
	for(i=2;ans<=Q;i++)
	{
		if(a[i]==0)
		{
			ans++;
			printf("%d ",i);
			for(k=i+i;k<10000000;k+=i)
		    {
                a[k]=1;
		    }
		}
	}
	///printf("%d\n",ans);
}
