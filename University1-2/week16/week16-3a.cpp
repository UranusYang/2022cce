///(SOIT107_ADVANCE_005) �i���D�G�r����� : ��J��ӫܤj�������a�P b�A�p�Ga>b�h��X 1�A�p�G a<b�h��X -1, �p�G a=b �h��X 0�C (�t�ܡG�i�Φr���J�A�Φr�ꪺ�[�I�Ӥ�j�p�C)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1>len2) printf("1");
	if(len1==len2) printf("0");
	if(len1<len2) printf("-1");
}
