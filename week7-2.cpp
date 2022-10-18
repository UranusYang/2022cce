///最大公因數，改用 long ling int
/// scanf("%lld", &a); 讀入
///printf("%lld", &b); 印出

#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("大公因數是:%d\n", ans);
}
