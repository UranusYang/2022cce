///(SOIT107_ADVANCE_001_C) 進階題：判斷大小
///寫一方法能傳入2個整數，如果第一個數字比第二個數字小，則回傳-1;如果兩個數字相等，則回傳0; 如果第一個數字比第二個數字大，則回傳1。印出比較後的結果。
#include <stdio.h>
int f(int a,int b){
	if(a>b) return 1;
	if(a==b) return 0;
	if(a<b) return -1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

