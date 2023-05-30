///(SOIT107_ADVANCE_011) 進階題：字串中的數字個數 : 讀入一個至多80個字的字串，找出字串中有多少個數字。
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
