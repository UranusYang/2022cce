///Week06-1.cpp step01-1
///The C Programming Language
///�Ѽg:���дN�O�}�C�A�}�C�N�O����
#include <stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int *p;

    p = a;
    for(int i=0; i<5; i++){
        printf("a[i]: %d p[i]: %d\n", a[i], p[i]);
    }
}
