///�r��i��ܲ��A�i��ܵu�A�����D���׬O�h�֡A���ΰj��H
///�r��̫᭱�A�@�w�O 0 �ȡA�S�s�� NULL �šA�S�s�� '\0'
#include <stdio.h>
int main()
{
    char line[3000];

    printf("�п�J�ܪ��ܪ����r��A���n���Ů�A���� Enter\n");

    scanf("%s", line );
    printf("�����X�Ӧr���O�H\n");
    printf("%s\n", line);
    int count=0;
    for(int i=0; line[i]!=0; i++){
        count++;
    }
    printf("count:%d\n", count);
}
