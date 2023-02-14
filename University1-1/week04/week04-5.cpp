///for 迴圈 看次數

#include <stdio.h>
int main()
{
    int N=5;
    for( int i=0; i<N; i++){
        printf("出現 i:%d \n", i);
    }
    ///程式的重點,是N是多少,就幾次
    for(int i=1; i<=N; i++){
        printf("接下來 i:%d \n", i);
    }
}
