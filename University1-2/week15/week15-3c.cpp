///(SOIT108_Base_003A) �i���D�G��Ƥ�����3�����`�M : �D�ؤ��e�G�п�J��ӥѤp��j�������(�_�l�Ʀr�P�פ�Ʀr)�A�i�p��X�i�_�l�Ʀr�j��i����Ʀr�j���Ҧ�3�����Ƥ��`�M�C{ex. 3 9 => 3+6+9=18} �Ʀr�d��G���1~1000
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}
