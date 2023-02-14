///分數想要約分51 68
///試全部的數字,看能不能整除
#include <stdio.h>
int main()
{
    printf("請輸入兩個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 )
            ans=i;
    }
    printf("ans: %d 可約分", ans);
}
