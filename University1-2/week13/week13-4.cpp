///�i���D�G��ƤϧǱƦC�Ʀr : �]�p�@�Ө��f(n)�A�Ө�ƥi�H�Ǧ^���n���Ʀr�ϧǱƦC�Ҳզ�����ơC
///�Ʀr�d��G��� 1 �V 9999 (���t10������)
#include <stdio.h>
int main()
{
	int a,s=0;
	scanf("%d",&a);
	while(a>0){
		s=s*10+a%10;
		a=a/10;
	}
	printf("%d\n",s);
}
