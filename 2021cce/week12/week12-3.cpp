#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)///i���k��@��
        {
            if(a[i]>a[j])///�p�G����, i��j�洫
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }///�洫�᪺i�~�򩹥k��
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
