///week05-2.cpp step02-1 �F�� scanf()
///�H�e�N���{�ѹL & �Ÿ� scanf("%d", &a);
///�|���X�ܼƪ���m
///���ǥγB�A���Oscanf()�A�e�f�B�e���u�B���ݰ��ݧO�H
///�n�F�ѫ����ܼ� int *p; �ǬP
#include <stdio.h>
int main()
{
    int a = 10;
    int *p=&a;

    printf("a: %d address: %d \n", a, &a);
    printf("p: %d point to %d \n", p, *p);

    *p = 20;
    printf("now a is: %d", a);
}
