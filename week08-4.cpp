#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){///�N�[
        ///�Ů��+�Ӽh�O n�A�Ů� = n-1
        for(int k=1;k<=n-i;k++) printf(" ");
        ///�Ӽh�P�P�P�ƶq�@��
        for(int k=1;k<=i;k++) printf("*");
        ///printf("%d\n", i);�N�[
        printf("\n");
    }
}
