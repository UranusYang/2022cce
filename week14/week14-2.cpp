///�ܼƪ��d�� variable scop
///�ж��̪��A�u��b�ж��̨ϥ�
///�~�����ܼơA�i�H�Q�j�a�ݨ�
#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("��i��func()�ɡAz�O%d\n", z);
    z = 2;
    printf("�bfunc()�̡A��z�令%d\n", z);
}
int main()
{
    int x;
    func();

    printf("�bmain()���Az���ȬO%d\n", z);
    z = 1;
    printf("�bmain()�̧�z���ȡA�{�b�O%d\n", z);
}
