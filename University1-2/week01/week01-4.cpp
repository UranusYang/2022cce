///����:��J���(�ܦh�r��)
#include <stdio.h>
#include <string.h> ///���ܦh�r�ꪺ�u��,��strlen() �r�����
int main()
{
    char c;
    char line[30]; ///�}�C�A�r�����}�C�A�s�r��
    ///�}�C�n�h�j�H �n���D��

    printf("�п�J�@�Ӧr��,���n�Ӫ�: "); ///���n�W�L29
    scanf("%s", line); ///��J��Ӧr��,�S�� &
    ///�|�H�Ů��_�r
    printf("�A��J: %s\n", line);

    int N=strlen(line);
    for(int i=0; i<N; i++){
        if(line[i]=='2'){
            printf("���2\n");
        }
    }
}

