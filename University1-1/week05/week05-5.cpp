///2層迴圈,九九乘法表
#include <stdio.h>
int main()
{
    for( int i=1; i<10; i++){///10次: 0...9
        for(int j=1; j<10; j++){
            printf("%d*%d=%2d ", i, j, i*j);
        }
        printf("\n");
    }

}
