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
    ///最簡單的基礎型 電腦
    for(int i=0;i<4;i++)
    {
        printf("i:%d\n",i);
    }///會跑4次: 0 1 2 3

    ///最簡單的基礎型 人類數數字
    for(int i=1;i<=4;i++)
    {
        printf("人類的數法i:%d\n",i);
    }///會跑4次: 1 2 3 4

    for(int i=0;i<=4;i++)
    {
        printf("怪怪的.. %d\n",i);
    }///怪怪的,可以從基礎型走過來
}
```

# 第八週
## 階層總和
```C
#include <stdio.h>
int main()
{
	int n,i,sum=0,now=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		now*=i;
		sum+=now;
	}
	printf("%d",sum);
}
```

## 判質數

```C
#include <stdio.h>
int main()
{
    ///想知道 100以下的全部質數
    int now,i;
    for(now=2;now<=100;now++)
    {
        ///全部都測,測 now 是不是質數!!!
        ///now質數: 只有1和now可以整除
        int bad=0;
        for(i=2;i<now;i++)
        {
            if(now%i==0) bad=1;
        }
        if(bad==0) printf("%d ",now);///找到了!!
    }
}
```

## 印三角形
```C
#include <stdio.h>
int main()
{///三角形
    printf("1: *\n");///1樓,1顆星
    printf("2: **\n");///2樓,2顆星
    printf("3: ***\n");///3樓,3顆星
    printf("4: ****\n");///4樓,4顆星
    printf("5: *****\n");///5樓,5顆星
    printf("6: ******\n");///6樓,6顆星
    ///高度越高，程式越多 ... ex. 40層

    int n=6,i,k;
    for(i=1;i<=n;i++)
    {///先建出樓層，第i樓
        printf("%d: ",i);
        for(k=1;k<=i;k++) printf("*");
        printf("\n",i);
    }

}
```

## 印平行四邊形
```C
#include <stdio.h>
int main( void )
{
    int i,j;
    int n;

    printf("請輸入大小:");
    scanf("%d",&n);
    printf("\n");//補一個跳行

	int k;
   	for(i=1;i<=n;i++)
   	{//step01:鷹架，樓層
   		///printf("%d: ",i);//鷹架，第i樓

   		//step03:解決空格的問題，1樓1空格，2喽2空格
   		for(k=1;k<=i;k++) printf(" ");

   		//step02:有n顆星星
   		for(k=1;k<=n;k++) printf("*");
   		printf("\n");//鷹架
   	}

    return 0;
}
```

# 第十週
## 陣列
```C
#include <stdio.h>
int main()
{
    int d[3]={100,200,300};
    printf("d[0]:%d\n",d[0]);
    printf("d[1]:%d\n",d[1]);
    printf("d[2]:%d\n",d[2]);
    
    int f[3]={100,200,300};
    for(int i=0;i<3;i++)
    {
        printf("f[%d]:%d\n",i,f[i]);
    }
}
```
## 質數個數(篩子法)
```C
#include <stdio.h>///7個0,一千萬
int a[10000000]={ };///0:安全,1殺
        ///沒寫的會補0
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++)
    {
        if(a[i]==0)///第i個數沒有被殺掉
        {
            ans++;///找到一個王子i沒死
            ///找到國王i了!! 把他的兄弟殺掉
            for(int k=i+i;k<10000000;k=k+i)
            {
                a[k]=1;///殺掉
            }
        }
    }
    printf("Ans:%d",ans);
}
```

# 第十一週
## 列出前n個質數
```C
#include <stdio.h>
int a[10000000];
int main()
{
	int Q,i,k;
	printf("請問你想要幾個質數? (最大的質數不超過10000000, 請給小一點) ");
	scanf("%d",&Q);
	int ans=0;
	for(i=2;ans<=Q;i++)
	{
		if(a[i]==0)
		{
			ans++;
			printf("%d ",i);
			for(k=i+i;k<10000000;k+=i)
		    {
                a[k]=1;
		    }
		}
	}
	///printf("%d\n",ans);
}
```
## 泡泡排序法
```C
#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for(int k=0;k<10;k++)
    {
        for(int i=0;i<10-1;i++)
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
```

# 第十二週
## 選擇排序法
```C
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
```

# 第十三週
## 
