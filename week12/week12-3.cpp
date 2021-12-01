#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)///i的右邊一個
        {
            if(a[i]>a[j])///如果成立, i跟j交換
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }///交換後的i繼續往右比
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
