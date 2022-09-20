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
