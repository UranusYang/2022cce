///(SOIT108_Base_004) ��¦�D�G�P�_�y�Ъ��H�� : �D�ؤ��e�G�P�_�ҿ�J�y��(x,y)���Ҧb�H���A(�ȦҼ{�b�|�ӶH�������p�A���Ҽ{�b�b�u�έ��I�����p)�C{ex.(1,1)�ݲĤ@�H���B(-1,1)�ݲĤG�H���B(-1,-1)�ݲĤT�H���B(1,-1)�ݲĥ|�H��} �Ʀr�d��G��� -1000~1000
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0 && y>0) printf("1\n");
	if(x<0 && y>0) printf("2\n");
	if(x<0 && y<0) printf("3\n");
	if(x>0 && y<0) printf("4\n");
}
