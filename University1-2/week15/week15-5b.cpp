///(SOIT108_Base_012) ��¦�D�G��ƦV�q�ۥ[ : �D�ؤ��e�G��J�@�Ӿ��N�A�A�̧�Ū�J�ⵧ�U��N�Ӿ�ƪ��V�q�A��X���ⵧ�V�q�M�C�Ʀr�d��G���N�d�� 1�V10�F��L���1�V100 Ex. 5 8 4 10 3 8 10 9 4 4 9
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]+b[i]);
	}
}
