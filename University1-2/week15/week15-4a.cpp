///(SOIT108_Base_005) ��¦�D�G��Jn (n>0)�A �Dn���Ҧ��]�ƩM : ��Jn (n>0)�A �D n���Ҧ��]�ƩM�C{ex. 2���]�Ƭ�1�B2�A�]�ƩM���]�ƥ[�`1+2=3}
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0) ans+=i;
	}
	printf("%d",ans);
}
