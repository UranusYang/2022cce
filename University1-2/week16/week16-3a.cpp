///(SOIT107_ADVANCE_005) 進階題：字串長度 : 輸入兩個很大的正整數a與 b，如果a>b則輸出 1，如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 (暗示：可用字串輸入，用字串的觀點來比大小。)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1>len2) printf("1");
	if(len1==len2) printf("0");
	if(len1<len2) printf("-1");
}
