///(SOIT108_Base_011) ��¦�D�G������y�Ъ����n : �D�ئW�١G������y�Ъ����n (�D�حק�) (BACIC) �D�ؤ��e�G��J�������I�y�Ъ��|�Ӿ�ƭ�(x1,y1,x2,y2)�A�p�����ܳo���I�ҳ򤧭��n�C(EX.��J(x1,y1,x2,y2)�A�p��(x1,y1)�B(x1,y2)�B(x2,y2)�B(x2,y1)�ҳ򭱿n�C) �Ʀr�d��G���1 �V100
#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=(a-c)*(b-d);
	if(ans<0) ans = -ans;
	printf("%d",ans);
}
