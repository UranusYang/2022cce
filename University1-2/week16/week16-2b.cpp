///(SOIT107_ADVANCE_002) �i���D�G�}�C���Z : �g�@�}�C�j�p��6�A�̧ǿ�J�}�C�����A�p��}�C�����̤j�ȻP�̤p�Ȫ��t�Z
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(int i=1;i<6;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	printf("%d",max-min);
}
