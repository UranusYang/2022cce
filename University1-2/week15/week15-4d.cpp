///(SOIT108_Base_010) ��¦�D�G���M���� : �D�ؤ��e�G���@����n���˨�M�l���A����������N�@�ɡA�M�l���e�q��M�@�ɡA�аݦܤֻݭn�X�ӪM�l�~��ӱ�����̪����C�{�b��JN�PM�A�п�X���סC�Ʀr�d��GN��1 �V 9999�AM��1 �V99
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int ans=n/m;
	if(n%m>0) ans++;
	printf("%d",ans);
}
