///(SOIT108_Base_003) ��¦�D�G����ƥ����`�M : �D�ؤ��e�G��J�����n�A�i�p��G1*1+2*2+...+n*n ���`�M�����G�C�Ʀr�d��G���1~1000
#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		ans+=i*i;
	}
	printf("%d",ans);
}
