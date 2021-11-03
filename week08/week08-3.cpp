#include <stdio.h>
int main()
{
    ///稱笵 100场借计
    int now,i;
    for(now=2;now<=100;now++)
    {
        ///场常代,代 now 琌ぃ琌借计!!!
        ///now借计: Τ1㎝now俱埃
        int bad=0;
        for(i=2;i<now;i++)
        {
            if(now%i==0) bad=1;
        }
        if(bad==0) printf("%d ",now);///т!!
    }
}
