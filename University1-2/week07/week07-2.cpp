///Week07-2.cpp step01-2 �ɮת�Input/Output
///�A�^�Фj�@�W�� scanf("%s", line); Ū�J�@�Ӧr
#include <stdio.h>
int main()
{///�ɮ׫���    �ɮ׶}��("�ɦW", "�Ҧ�");
 ///FILE * fout = fopen("file.txt", "w"); ///�g write
    FILE * fin  = fopen("file.txt", "r"); ///Ū read

    ///printf("Hello World\n");
    ///fprintf(fout, "Hello World\n");
    char line[200];
    ///scanf("%s", line);
    fscanf(fin, "%s", line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n", line);


    fscanf(fin, "%s", line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n", line);
}
