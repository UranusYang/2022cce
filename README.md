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

## Week02-4

## Week03-1

## Week03-2

## Week03-3

## Week03-4

## Week03-5

## Week04-1

## Week04-2

## Week04-3

## Week04-4

## Week04-5

## Week05-1

## Week05-2

## Week05-3

## Week05-4

## Week05-5

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
