#include <stdio.h>

void display_num( int a )
{
    printf("�A�ᵹdisplay_num()���ѼƤ޼ƬO: %d\n", a);
    return; ///�p�G�O void �i�H���μg return
}

int main()
{
    display_num( 100 );
    display_num( 200 );
}
