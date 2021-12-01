#include <stdio.h>
///int a[10]={3,0,1,8,7,2,5,4,6,9};
int a[10]={9,8,7,6,5,4,3,2,1,0};///全部反過來
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");///印出陣列
    for(int k=0;k<10-1;k++)///可減可不減
        {
            for(int i=0;i<10-1;i++)///一定要減1
            {
                if(a[i]>a[i+1])
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
            for(int i=0;i<10;i++) printf("%d ",a[i]);
            printf("\n");
        }

}
