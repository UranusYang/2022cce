///�r��������禡
#include <stdio.h>
#include <string.h>
char line[3000];
char line2[3000];///�b�~���ŧi����n(�Ŷ��j�A�B�M��0)
int main()
{
    printf("�п�J�@��r(���n���Ů�)\n");
    scanf("%s", line );

    int N=strlen(line);///�禡1
    printf("�r����׬O:%d\n", N);

    strcpy(line2, line);///�禡2 ���� a=10 �k��
    printf("line2: %s\n", line2);
}

