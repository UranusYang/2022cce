#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){///鷹架
        ///空格數+樓層是 n，空格 = n-1
        for(int k=1;k<=n-i;k++) printf(" ");
        ///樓層與星星數量一樣
        for(int k=1;k<=i;k++) printf("*");
        ///printf("%d\n", i);鷹架
        printf("\n");
    }
}
