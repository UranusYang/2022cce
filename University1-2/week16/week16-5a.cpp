///(SOIT108_Advance_010) �i���D�G���U�I�� : �D�ؤ��e�G���@�ӴI�Ϊ��]���W�L�@�U���A�ҥH�`�`�d���M���]���쩳���h�֡A�{�b��J�@�Ӿ��N��ܴI�Ϊ��]���`�B�A�бz���L�b�]���`�B�W�A�q���C�T��[�@�ӳr���A��K�\Ū�C�Ʀr�d��G���N�d�� �� 1000000000000 �V 999000000000000�C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0){
			printf(",");
		}
		printf("%c",a[i]);
	}
}
