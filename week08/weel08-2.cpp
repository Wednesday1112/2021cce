#include <stdio.h>
int main()
{   ///質數:只能被1和n本身整除!!!
    ///反話:只要有其他人可以整除,死掉了!!!
    int n,i;
    scanf("%d",&n);
    int bad=0;///一開始還沒有壞掉
    for(i=2;i<n;i++)///測 2...小於n
    {
        if(n%i==0) bad=1;///整除! 壞掉了!
    }
    if(bad==0) printf("%d是質數",n);
    else printf("%d 壞掉了!! 不是質數",n);
    ///bad拿來用
}
