///Week02-5.cpp step03-2 了解 '\0' 和 0 的差別
#include <stdio.h>
int main()
{
    printf("%d\n", '\0');
    printf("%d\n",   0 );
    if( '0' == 0 ) printf("竟然相同\n");
}
