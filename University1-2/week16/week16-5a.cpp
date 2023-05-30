///(SOIT108_Advance_010) 進階題：億萬富翁 : 題目內容：有一個富翁的財產超過一萬億，所以常常搞不清楚財產到底有多少，現在輸入一個整數N表示富翁的財產總額，請您幫他在財產總額上，從後方每三位加一個逗號，方便閱讀。數字範圍：整數N範圍 為 1000000000000 – 999000000000000。
#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0){
			printf(",");
		}
		printf("%c",a[i]);
	}
}
