///(SOIT108_Base_007) 基礎題：把數字倒著印出來 : 題目內容：輸入10個整數，把這10個數字倒著印出來。數字範圍：整數1 – 100
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
