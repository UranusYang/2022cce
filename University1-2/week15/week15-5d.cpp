///(SOIT108_Base_013A) ��¦�D�G��Ƴ̤j�ȡB�̤p�� : �D�ؤ��e�G�г]�p�@�ӵ{���A�ӵ{���i����L��J�@�ӥѼƦr�Ҳզ��r��(���ѡG�ťլ۹j�ΫD0�Ʀr)�A�å�0�����C�Ҧp: 1 2 3 4 5 0 �� 23 -31 15 8 0 �Цb�{�����]�p�@�ӦW��Func�����(��k)�A�Ө�ƥi�����@�Ӧp�W�z���r��ñN�Ӧr�ꤤ�Ҧ�����ƥѤp�Ӥj���s�ƦC�æL�X�p�U�ҭz�����G[�̤p��,�̤j��] �����L��J 1 5 4 3 2 0�ɡA�|�L�X [1,5] �����L��J23 -31 15 8 0�ɡA�|�L�X [-31,23]
#include <stdio.h>
int main()
{
	int a,min,max;
	scanf("%d",&min);
	max=min;
	for(int i=2; ;i++){
		scanf("%d",&a);
		if(min>a){
			min=a;
		}
		if(max<a){
			max=a;
		}
		if(a==0) break;
	}
	printf("[%d,%d]",min,max);
}
