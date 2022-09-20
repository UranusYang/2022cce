#include <stdio.h>
int main()
{
    for(int n=1; n<2000; n++){
        if(n%8==6 && n%9==7 && n%15==13){
            printf("\n�{쫇n좬 %d\n", n );
            printf("Ξ8간푡%d\n",n%8);
            printf("Ξ9간푡%d\n",n%9);
            printf("Ξ15간푡%d\n",n%15);
        }
    }
}
