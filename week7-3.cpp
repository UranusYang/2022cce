///�������۰��k�A��̤j���]��
///�n�� long long int �����A�Ʀr�ܤj
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
    printf("���׬O: %lld\n", b);
}
