///week05-2.cpp step02-1 了解 scanf()
///以前就有認識過 & 符號 scanf("%d", &a);
///會取出變數的位置
///有些用處，像是scanf()，送貨、送炸彈、偷看偷看別人
///要了解指標變數 int *p; 準星
#include <stdio.h>
int main()
{
    int a = 10;
    int *p=&a;

    printf("a: %d address: %d \n", a, &a);
    printf("p: %d point to %d \n", p, *p);

    *p = 20;
    printf("now a is: %d", a);
}
