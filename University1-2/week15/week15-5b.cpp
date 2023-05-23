///(SOIT108_Base_012) 基礎題：整數向量相加 : 題目內容：輸入一個整數N，再依序讀入兩筆各有N個整數的向量，輸出此兩筆向量和。數字範圍：整數N範圍 1–10；其他整數1–100 Ex. 5 8 4 10 3 8 10 9 4 4 9
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]+b[i]);
	}
}
