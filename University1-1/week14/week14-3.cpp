///�ܼƪ��d�� variable scop
///�ж��̪��A�u��b�ж��̨ϥ�
///�~�����ܼơA�i�H�Q�j�a�ݨ�
///�T���B�w�� �g�������Z
#include <stdio.h>
int a=20;
void funcA()
{
    int a=10;
    printf("funcA�̭��La:%d\n", a);
}
void funcB()
{
    int a=30;
    printf("funcB�̭��La:%d\n", a);
}
int main()
{
    printf("�bmain()�ݨ쪺a�O:%d\n", a);
    funcA();
    funcB();
    printf("�bmain()�ݨ쪺a�O:%d\n", a);
}
