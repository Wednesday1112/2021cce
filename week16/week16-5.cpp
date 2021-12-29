#include <stdio.h>
char line[300]="10101001010101010101";
int main()
{
    int ans=0;
    ///int i=0;
    ///while(line[i]!='\0')
    for(int i=0;line[i]!='\0';i++)
    {
        if(line[i]=='1') ans++;
        ///i++;
    }
    printf("¦³%d­Ó1\n",ans);
}
