///(SOIT107_ADVANCE_011) �i���D�G�r�ꤤ���Ʀr�Ӽ� : Ū�J�@�Ӧܦh80�Ӧr���r��A��X�r�ꤤ���h�֭ӼƦr�C
#include <stdio.h>
int main()
{
	char a[81];
	scanf("%s",a);
	int i=0,ans=0;
	while(a[i]!='\0'){
		if(a[i]>='0' && a[i]<='9'){
			ans++;
		}
		i++;
	}
	printf("%d\n",ans);
}
