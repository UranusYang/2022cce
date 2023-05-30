///(SOIT107_ADVANCE_006) 進階題：除惡務盡 : 輸入一個字串，將所有字元2去除後輸出。
#include <stdio.h>
int main()
{
	char c;
	while(scanf("%c",&c)==1){
		if(c!='2') printf("%c",c);
	}
}
