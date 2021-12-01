#include <stdio.h>
int main()
{
	int n,i,sum=0,now=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		now*=i;
		sum+=now;
	}
	printf("%d",sum);
}
