///進階題：2進位轉10進位 : 讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。
///數字範圍：0000 – 1111
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
