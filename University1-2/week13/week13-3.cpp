///�i���D�G����Ȩ�� :
///�D�ئW�١G����Ȩ�ơC
///�D�ؤ��e�G�]�p�@�Ө��f(n)�A�|�^��n������ȡC
///�Ʀr�d��G���1 �V 10000
#include <stdio.h>
int f(int n)
{
	if(n<0) return -n;
	else return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
