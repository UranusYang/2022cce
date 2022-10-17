# 2022cce

# Week01
## Week01-1 Hello World
1. #include <stdio.h> 這條程式是為了叫出printf()所需的程式
2. printf 的意思是輸出，會顯示出來
3. 換行符號是 \n

p.s
1. printf("") 括號裡的雙引號要記得打
2. 最後打完要記得加分號 ; ，他代表程式的結束，跟句號的功能很像
```cpp
#include <stdio.h>

int main()
{
    printf("Hello World\n");
}
```

## Week01-2 comments 註解用法
1. /// 三條斜線會比較深
2. // 兩條斜線比較淺

p.s 註解不會顯示在小黑裡
```cpp
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("I am a student.\n");
    ///有時候中文會有問題，你可用英文
    //註解 comments 是給人看的
    ///CodeBiocks 如果畫三條斜線，會比較深
}
```

# Week02
## Week02-1 \t 和 \n 縮排和換行
1. 利用 \t(=tab) 縮排，一次是空四格
2. 利用 \n 換行
```cpp
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("H\tello World\n");
    printf("\tHello World\n");
}
```

## Week02-2 %d 整數
1. %d 是以10進位來顯示整數
2. 試著用 %d 來插入數字
```cpp
#include <stdio.h>

int main()
{
    printf("333\n");
    printf("這裡有字，有插入值\n");
    printf("這裡有字%d有插入值\n", 333);
}
```

## Week02-3 int(integer) 和 %d 用法 
1. 利用 int 宣告未知數，讓電腦知道
2. 把一個數代入，印出來
```cpp
/// 學習 int 整數 integer
#include <stdio.h>

int main()
{
    int a;
    a = 2;
    printf("現在的a是%d\n", a);
    a = 99;
    printf("現在的a是%d\n", a);
}
```

## Week02-4 scanf 和 %d 用法 兩數相加
1. 利用scanf讀入數值
2. & 表示我們要把讀到的數值放到 a 及 b 對應的 address 裡面去
3. 再用 %d 表示要讀入的整數代號
```cpp
#include <stdio.h>

int main()
{
    int a, b;
    printf("請用鍵盤輸入2個整數：");
    scanf("%d", &a );
    scanf("%d", &b );
    printf("你讀入了 %d %d \n", a , b );
    printf("它們加起來是：%d\n", a+b);
}
```

# Week03
## Week03-1 + - * / % 運算
1. 課本的第二章有運算符號
2. % 的用法可代表取除法的餘數
```cpp
#include <stdio.h>
int main()
{
    int a, b;
    printf("請輸入兩個數字： ");
    scanf("%d%d" , &a, &b);

    printf("%d + %d 是 %d\n", a, b, a+b);
    printf("%d - %d 是 %d\n", a, b, a-b);
    printf("%d * %d 是 %d\n", a, b, a*b);
    printf("%d / %d 是 %d\n", a, b, a/b);
    printf("%d 除以 %d 是 %d 餘 %d\n", a, b, a%b);
}
```

## Week03-2 % 餘數用法
1. 某正整數，用8除餘6，用9除餘7，用15除餘13，該數最小值為多少？
2. 答案是358
3. 使用 % 餘數的符號做運算
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入數字n： ");

    int n;
    scanf("%d", &n);
    printf("用8除餘%d\n",n%8);
    printf("用9除餘%d\n",n%9);
    printf("用15除餘%d\n",n%15);
}
```

## Week03-3 if 用法 比大小
1. 使用if判斷某整數和10的大小
2. 運用 %d 整數符號帶入數值
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入數字n: ");

    int n;
    scanf("%d", &n);
    if( n>10 ) printf("n>10");
    if( n<10 ) printf("n<10");
    if( n==10 ) printf("n==10");
}
```

## Week03-4 if 和 else 的用法 奇偶數判斷
1. 利用 if(判斷) 配合 else 來做事，是課本第三章的第一個程式範例
2. 利用 % 餘數符號運算結果作判斷依據
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n%2==0) printf("even");
    else printf("odd");
}
```

## Week03-5 if 和 for迴圈的搭配用法 找到數字n
1. 用8除餘6，用9除餘7，用15除餘13，找到數字n
2. 用課本第三章的第二個主題 for迴圈
3. 搭配 if 判斷找出答案
4. 使用 % 餘數符號和 &&而且 兩種符號
```cpp
#include <stdio.h>
int main()
{
    for(int n=1; n<2000; n++){
        if(n%8==6 && n%9==7 && n%15==13){
            printf("\n現在n： %d\n", n );
            printf("用8除餘%d\n",n%8);
            printf("用9除餘%d\n",n%9);
            printf("用15除餘%d\n",n%15);
        }
    }
}
```

# Week04
## Week04-1 if 和 else的用法 判斷閏年
1. 閏年、奧運4年一次
2. 口訣：4 100 400 倒過來想
3. 從範圍最小的開始找
4. 利用 if 和 else 做判斷
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入西元年分：");

    int n;
    scanf("%d", &n);

    if( n%400==0 ) printf("閏年");
    else if( n%100==0 ) printf("普通年/平年");
    else if( n%4==0 ) printf("閏年");
    else printf("普通年/平年");
}
```

## Week04-2 排版
1. 有預設的 Allmen (ANSI), K&R, Stroustrup 等方法
2. CodeBlocks 右鍵，Format AStly 可自動排版
3. 可在Setting-Editor，左邊第7個 Source Formatter調整看看
```cpp
#include <stdio.h>
int main()
{
    for(int n=1; n<2000; n++)
    {
        if(n%8==6 && n%9==7 && n%15==13)
        {
            printf("\n現在n： %d\n", n );
            printf("用8除餘%d\n",n%8);
            printf("用9除餘%d\n",n%9);
            printf("用15除餘%d\n",n%15);
        }
    }
}
```

## Week04-3 if 和 else的用法 判斷閏年
1. 閏年、奧運4年一次
2. 口訣：4 100 400 倒過來想
3. 從範圍最小的開始找
4. 利用 if 和 else 做判斷
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n%400==0) printf("Yes");
	else if(n%100==0)printf("No");
	else if(n%4==0)printf("Yes");
	else printf("No");
}
```

## Week04-4 for迴圈
1. 把 int i 放在 for()的裡面, 再來是把 i從0開始
2. 會印出 i:0 ... i:3 共4次
```cpp
#include <stdio.h>
int main()
{
    for( int i=0; i<4; i++){
        printf("出現 i：%d \n", i);
    } ///會印出 i:0 ... i:3 共4次
}
```

## Week04-5 for 迴圈 看次數
1. 熟悉「迴圈到底會跑幾次」
2. 一種是電腦的想法，從0開始
3. 二是人類的想法，從1開始
4. 都是執行中間那個數次的次數，是N是多少，就幾次
```cpp
#include <stdio.h>
int main()
{
    int N=5;
    for( int i=0; i<N; i++){
        printf("出現 i:%d \n", i);
    }
    ///程式的重點,是N是多少,就幾次
    for(int i=1; i<=N; i++){
        printf("接下來 i:%d \n", i);
    }
}
```

# Week05
## Week05-1 if 和 while迴圈的差別 flow chart 流程圖
1. 把 if 改成 while 看它的差別
2. if 只會印一次
3. while 不會停
```cpp
#include <stdio.h>
int main()
{
    int n=2;
    ///本來是if(判斷)  印一次

    ///改成while(迴圈)
    while(n==2) printf("n是2\n");
    ///不會停
}
```

## Week05-2 while迴圈 flow chart 流程圖
1. 有了判斷的標準，while 迴圈會停
2. 課本第三章，運算
```cpp
#include <stdio.h>
int main()
{
    int n=10;

    while(n>0){
        printf("n是%d, n>0\n", n);

        n--;///課本第三章,運算
    }
}
```

## Week05-3 for和 while迴圈的差別
1. 把 while 改成 for
2. 課本第-4章，運算
```cpp
#include <stdio.h>
int main()
{
    ///int n=10;
    ///while(n>0){
    ///    printf("n是%d, n>0\n", n);
    ///    n--;///課本第2章,運算
    ///}
    for( int n=10; n>0; n-- ){
        printf("n是%d, n>0\n", n);
    }
}
```

## Week05-4 for迴圈
1. 了解for迴圈的各種用法
2. 電腦習慣、人類熟悉、倒過來的迴圈
```cpp
#include <stdio.h>
int main()
{
    for( int i=0; i<3; i++ ){ ///0 1 2
        printf("迴圈(電腦習慣) i是%d, i>0\n", i);
    }
    for( int i=1; i<=3; i++ ){ ///1 2 3
        printf("迴圈(人類熟悉) i是%d, i>0\n", i);
    }
    for( int i=3; i>0; i-- ){ ///3 2 1
        printf("倒過來的迴圈 i是%d, i>0\n", i);
    }
}
```

## Week05-5 for迴圈 九九乘法表
1. 利用 for 迴圈運算
2. 口訣：左手i，右手j
3. %2d 中間的二代表有兩格
```cpp
#include <stdio.h>
int main()
{
    for( int i=1; i<10; i++){///10次: 0...9
        for(int j=1; j<10; j++){
            printf("%d*%d=%2d ", i, j, i*j);
        }
        printf("\n");
    }

}
```

# Week06
## Week06-1 for迴圈 畫星星
1. 用星星畫倒過來的三角形
2. 利用「左手i、右手j」的口訣, 來思考迴圈執行的樣子
3.  先把 i:5 i:4 i:3 i:2 i:1 印出來，使用倒過來的迴圈
4.  裡面的 j迴圈, 則是用基礎型
```cpp
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){///倒過來型
        for(int j=0; j<i; j++){///基礎型
            printf("*");
        }
    printf("i:%d星星\n", i);
    }
}
```

## Week06-2 for迴圈 畫等腰三角形
1. 先印出空格，空格是從空四格開始減少
2. 再印出星星，星星的數量是奇數1、3、5、7、9
3. 利用for迴圈
4. 口訣：左手i 當鷹架, 右手j 一直做
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space=5-i , star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}
```

## Week06-3 for迴圈 小學的約分
1. 分數想要約分51 68，試全部的數字，看能不能整除
2. 使用 1個for迴圈
3. 這個數 i 如果可以兩個都整除，那就找到答案了
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 )
            ans=i;
    }
    printf("ans: %d 可約分", ans);
}
```

## Week06-4 while 輾轉相除法
1. 口訣老大a、老二b、老三c=a%b，如果是0，則老二b是答案。
2. 老二變老大、老三變老二，繼續做，就成功了。
3. 利用while一直做
```cpp
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1)
    {
        c = a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案b: %d ", b);
}
```
