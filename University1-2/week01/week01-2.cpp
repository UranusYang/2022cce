///存檔成 week01-2.cpp 檔名要自己打
#include<stdio.h>
///任務:毒入資料(很多字母),先從1個字母、1個整數
int main()
{
    printf("請輸入1個字母: ");
    char c; ///字母
    scanf("%c", &c);
    printf("你輸入了 %c \n", c);

    printf("請輸入一個整數: ");
    int a; ///整數
    scanf("%d", &a);
    printf("你輸入了 %d \n", a);
    return 0;
}
