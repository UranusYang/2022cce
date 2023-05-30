///(SOIT107_ADVANCE_010) 進階題：判斷迴文 : 讀入一個至多80個字的字串，判斷字串是否為迴文(即由左而右，由右而左，順序相同，大小寫字母視為相異)。如果是迴文則輸出YES，如果不是則輸出NO。
#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	int i;
	scanf("%s",a);
	int line=strlen(a);
	for(i=0;i<line/2;i++){
		if(a[i]!=a[line-1-i]) break;
	}
	if(i==line/2)printf("YES");
	else printf("NO");
}
