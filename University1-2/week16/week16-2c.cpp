///(SOIT107_ADVANCE_003) �i���D�G�p��@�C��ƪ��`�M : �м��g�@�ӵ{���p��æL�X�ƭӾ�ƪ��[�`�C���]�H999��ĵ�ܭȡC
#include <stdio.h>
int main()
{
	int ans=0;
	for(int i=1; ;i++){
		printf("Enter an integer ( 999 to end ): \n");
		int a;
		scanf("%d",&a);
		if(a==999) break;
		ans+=a;
	}
	printf("The total is: %d",ans);
}
