///Week04-2.cpp step02-1 �j��
///�� 1234321 �n�P�_�O���O�j��: �r���}�C+�j��
#include <stdio.h>
#include <string.h>
int main()
{
	char line[50];
	scanf("%s", line);

	int N = strlen(line);
	int yes=0;
	for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) printf("������yes�����A�O�j��\n");
    else printf("���O������yes�A�N���O�j��\n");
}
