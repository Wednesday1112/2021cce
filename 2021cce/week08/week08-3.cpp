#include <stdio.h>
int main()
{
    ///�Q���D 100�H�U���������
    int now,i;
    for(now=2;now<=100;now++)
    {
        ///��������,�� now �O���O���!!!
        ///now���: �u��1�Mnow�i�H�㰣
        int bad=0;
        for(i=2;i<now;i++)
        {
            if(now%i==0) bad=1;
        }
        if(bad==0) printf("%d ",now);///���F!!
    }
}
