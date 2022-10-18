///改用輾轉相除法，找最大公因數
///要用 long long int 版本，數字很大
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c = a%b;
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if(c==0) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b);
}
