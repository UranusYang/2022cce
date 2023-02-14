///變數的範圍 variable scop
///房間裡的，只能在房間裡使用
///外面的變數，可以被大家看到
///三重劉德華 土城金城武
#include <stdio.h>
int a=20;
void funcA()
{
    int a=10;
    printf("funcA裡面印a:%d\n", a);
}
void funcB()
{
    int a=30;
    printf("funcB裡面印a:%d\n", a);
}
int main()
{
    printf("在main()看到的a是:%d\n", a);
    funcA();
    funcB();
    printf("在main()看到的a是:%d\n", a);
}
