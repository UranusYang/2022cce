///(SOIT107_ADVANCE_010) �i���D�G�P�_�j�� : Ū�J�@�Ӧܦh80�Ӧr���r��A�P�_�r��O�_���j��(�Y�ѥ��ӥk�A�ѥk�ӥ��A���ǬۦP�A�j�p�g�r�������۲�)�C�p�G�O�j��h��XYES�A�p�G���O�h��XNO�C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	int i;
	scanf("%s",a);
	int line=strlen(a);
	for(i=0;i<line/2;i++){
		if(a[i]!=a[line-1-i]) break;
	}
	if(i==line/2)printf("YES");
	else printf("NO");
}
