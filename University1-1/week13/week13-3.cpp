#include <stdio.h>

void display_num( int a )
{
    printf("你丟給display_num()的參數引數是: %d\n", a);
    return; ///如果是 void 可以不用寫 return
}

int main()
{
    display_num( 100 );
    display_num( 200 );
}
