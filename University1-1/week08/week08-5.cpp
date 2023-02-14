#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            if(k<=n-i) printf(" ");///有時候印空格
            else    printf("*");///有時候印星星
        }
        printf("\n");
    }
}
