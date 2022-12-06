///程そ计 だ
///ex. 51/68 だ盾
///ノ劣锣埃猭 ㄧΑ㊣ㄧΑ
#include <stdio.h>
///程そ计璣ゅ greatest common divisor
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
          ///ρ ρ
    return gcd(b, a%b);
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    int ans = gcd(a,b);
    printf("%d\n", ans);
}
