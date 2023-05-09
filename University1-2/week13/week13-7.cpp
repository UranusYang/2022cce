///進階題：陣列找出現次數 : 讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)，之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。
///數字範圍：正整數 1 – 9
#include <stdio.h>
int main()
{
	int a[11];
	int n=0,s=0;
	for(int i=0;i<11;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		if(a[i]==k) s++;
	}
	printf("%d\n",s);
}
