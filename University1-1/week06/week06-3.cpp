///���ƷQ�n����51 68
///�ե������Ʀr,�ݯण��㰣
#include <stdio.h>
int main()
{
    printf("�п�J��Ӿ��,�n����: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 )
            ans=i;
    }
    printf("ans: %d �i����", ans);
}
