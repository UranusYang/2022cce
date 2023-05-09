///進階題：迴文判斷 : 題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。
///如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。
///如果該數字未構成廻文，則顯示NO。
#include <stdio.h>
int main()
{
	char c1, c2, c3, c4;
	scanf("%c%c%c%c", &c1,&c2,&c3,&c4);
	if(c1==c4 && c2==c3) printf("YES\n");
	else printf("NO\n");
}
