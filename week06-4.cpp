#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1)
    {
        c = a%b;
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("����b: %d ", b);
}
