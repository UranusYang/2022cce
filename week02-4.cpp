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
