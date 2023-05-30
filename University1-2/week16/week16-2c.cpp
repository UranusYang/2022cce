///(SOIT107_ADVANCE_003) 進階題：計算一列整數的總和 : 請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。
#include <stdio.h>
int main()
{
	int ans=0;
	for(int i=1; ;i++){
		printf("Enter an integer ( 999 to end ): \n");
		int a;
		scanf("%d",&a);
		if(a==999) break;
		ans+=a;
	}
	printf("The total is: %d",ans);
}
