///最大公因數 為了約分
///ex. 51/68 可以約分嗎？
///用輾轉相除法 函式呼叫函式
#include <stdio.h>
///最大公因數的英文 greatest common divisor
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
          ///老二 老三
    return gcd(b, a%b);
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    int ans = gcd(a,b);
    printf("%d\n", ans);
}
