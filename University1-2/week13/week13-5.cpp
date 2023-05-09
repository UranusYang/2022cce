///進階題：計算陣列的平方值 : 輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。
///數字範圍：整數N範圍 1 – 10；其他整數1 – 100
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d", &a);
		printf("%d,", a*a);
	}

	printf("\n");
}
