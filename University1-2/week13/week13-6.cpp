///�i���D�G2�i����10�i�� : Ū�J�@��0000 ~ 1111��2�i����(�T�w4���)�A����ܥX������10�i��Ʀr�C
///�Ʀr�d��G0000 �V 1111
#include <stdio.h>
int main()
{
	char c1,c2,c3,c4;
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
	int ans=0;
	if(c1=='1') ans+=8;
	if(c2=='1') ans+=4;
	if(c3=='1') ans+=2;
	if(c4=='1') ans+=1;
	printf("%d\n",ans);
}
