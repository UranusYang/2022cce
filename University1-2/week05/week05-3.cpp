///wee05-3.cpp step02-2 很多個指標
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;
    printf("a: %d b: %d \n", a, b);

    *p1 = 30;  ///把p1指到的地方，變成30
    printf("a: %d b: %d \n", a, b);


    p2 = &a;  ///偷改一下 p2改指到另一個地方
    *p2 = 40;  ///把p2指到的地方，變成40
    printf("a: %d b: %d \n", a, b);
}
