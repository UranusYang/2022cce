///long long int
///很長 很長 的整數
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d\n", n);
    ///在x86的電腦架構下 int 是32位元
    ///可裝9-10位數 首位最大到2

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n", a);
    ///可裝19-20位數
    ///lld 是英文的 long long d
}
