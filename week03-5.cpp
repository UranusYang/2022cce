#include <stdio.h>
int main()
{
    for(int n=1; n<2000; n++){
        if(n%8==6 && n%9==7 && n%15==13){
            printf("\n�{�bn�G %d\n", n );
            printf("��8���l%d\n",n%8);
            printf("��9���l%d\n",n%9);
            printf("��15���l%d\n",n%15);
        }
    }
}
