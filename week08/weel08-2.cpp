#include <stdio.h>
int main()
{   ///���:�u��Q1�Mn�����㰣!!!
    ///�ϸ�:�u�n����L�H�i�H�㰣,�����F!!!
    int n,i;
    scanf("%d",&n);
    int bad=0;///�@�}�l�٨S���a��
    for(i=2;i<n;i++)///�� 2...�p��n
    {
        if(n%i==0) bad=1;///�㰣! �a���F!
    }
    if(bad==0) printf("%d�O���",n);
    else printf("%d �a���F!! ���O���",n);
    ///bad���ӥ�
}
