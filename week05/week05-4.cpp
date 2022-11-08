///了解for迴圈的各種用法
#include <stdio.h>
int main()
{
    for( int i=0; i<3; i++ ){ ///0 1 2
        printf("迴圈(電腦習慣) i是%d, i>0\n", i);
    }
    for( int i=1; i<=3; i++ ){ ///1 2 3
        printf("迴圈(人類熟悉) i是%d, i>0\n", i);
    }
    for( int i=3; i>0; i-- ){ ///3 2 1
        printf("倒過來的迴圈 i是%d, i>0\n", i);
    }
}
