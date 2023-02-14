#include <stdio.h>
int main()
{
    int a[4] = { 10, 20, 30, 40 };

    for(int i=0; i<4; i++){
        printf("%d ", a[i] );
    }
    printf("\n上面正的印，下面倒著印\n");
    for(int i=3; i>=0; i--){
        printf("%d ", a[i] );
    }
}
