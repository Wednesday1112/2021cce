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
