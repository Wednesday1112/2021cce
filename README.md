# 2021cce
資傳一乙程式設計學習紀錄

# 第一週
另補課

# 第二週
## 輸出Hello World
```C
#include <stdio.h>
int main()
{
    printf("Hello World\n");
}
```

# 第三週
## 兩數相加(一問一答)
```C
#include <stdio.h>
int main ()
{
    int a, b;
    scanf ( "%d%d", &a, &b );
    printf ( "%d", a+b );
}
```

# 第四週
## 小數
```C
#include <stdio.h>
int main()
{
    float pi=3.14159265358979;
    double pii=3.14159265358979;
    printf("%f\n",pi);
    printf("%f\n",pii);

    printf("%.8f\n",pii);
    printf("%.12f\n",pii);
    printf("%9.5f\n",pii);
}
```
## 成績評等
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90) printf("A+");
	else if (a>=80) printf("A");
	else if (a>=70) printf("B");
	else if (a>=60) printf("C");
	else printf("D");
}
```

# 第五週
## 成績評等(另)
```C
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<=100&&a>=90) printf("A+");
    if (a<=89&&a>=80) printf("A");
    if (a<=79&&a>=70) printf("B");
    if (a<=69&&a>=60) printf("C");
    if (a<=59) printf("D");
}
```
## 判奇偶
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a%2==0) printf("even");
	else printf("odd");
}
```

# 第六週
## 判三角類型
```C
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if (a>c)
	{
		temp=a;
	 	a=c;
	 	c=temp;
	}
	if (b>c)
	{
		temp=b;
		b=c;
	 	c=temp;
	}
	if (a+b<=c) printf("錯誤");
	else if (a*a+b*b==c*c) printf("直角");
	else if (a*a+b*b<c*c) printf("鈍角");
	else if (a*a+b*b>c*c) printf("銳角");
}
```

# 第七週
## 迴圈 while
```C
#include <stdio.h>
int main()
{
    int n=2;
    while(n>0)
    {
        printf("n大於0\n");
        n=n-1;
    }
}
```

## 迴圈 for
```C
#include <stdio.h>
int main()
{
    for(int n=2;n>0;n--)
    {
        printf("n大於0\n");
    }
}
```

## for的寫法
```C
#include <stdio.h>
int main()
{
    int n;
    for(n=0;n<=3;n++)
    {
        printf("有幾次呢?\n");
    }///會跑4次

    for(int n=0;n<3;n++)
    {
        printf("老師推薦的寫法,有幾次?\n");
    }///會跑3次
}
```
