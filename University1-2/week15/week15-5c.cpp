///(SOIT108_Base_013) ��¦�D�G�p��@�ե��N�ƥت���ƪ��`�M : �D�ؤ��e�G��J�@�եH0�����������N�ƥت����(�䤤�u���̫�@�Ӿ�ƥi�H��0)��p��Ҧ���J��������`�M(�t�Ƥ��[�i�`�M)�C�Ҧp: ����L��J 1 2 3 4 5 0 �N�|�L�X 15 ����L��J 22 11 44 0 �N�|�L�X 77 ����L��J 33 -2 9 4 55 0 �|�L�X 101
#include <stdio.h>
int a[100];
int main()
{
	int b=0;
	for(int i=0; ;i++){
		scanf("%d", &a[i]);
		if(a[i]>0) b+=a[i];
		if(a[i]==0) break;
	}
	printf("%d", b);
}
