///�i���D�G�}�C��X�{���� : Ū�J�@�ӥ���ƪ��ƦC(�v�@��J����ơA��J0��ܵ����A�ƦC�ܦh�]�t10�Ӿ��)�A����AŪ�J�@�ӥ���ơA�{���i�H��X�Ӿ�ƥX�{�b�ƦC�������ơC
///�Ʀr�d��G����� 1 �V 9
#include <stdio.h>
int main()
{
	int a[11];
	int n=0,s=0;
	for(int i=0;i<11;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		if(a[i]==k) s++;
	}
	printf("%d\n",s);
}
