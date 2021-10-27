#include <stdio.h>
int main()
{
    int n;///1973年的C發明者的寫法,1998年ANSI
    for(n=0;n<=3;n++)
    {
        printf("有幾次呢?\n");
    }///課本的寫法,不好!!!

    ///1998/1999 新版的 C++/C寫法
    for(int n=0;n<3;n++)
    {
        printf("老師推薦的寫法,有幾次?\n");
    }///會跑3次
}
