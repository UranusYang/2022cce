#include <stdio.h>
///49 �N�O�Ʀr '1'
///65 �N�O�j�g 'A'
///97 �N�O�p�g 'a'
int main()
{
    printf("A ���ȬO %d\n", 'A');
    printf("B ���ȬO %d\n", 'B');
    printf("c ���ȬO %d\n", 'c');

    for(int c = 'A';c<='Z'; c++){///�p�ߡAc�O�p�g��
        printf("%c ���ȬO %d\n", c, c);
    }
}
