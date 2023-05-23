///(SOIT108_Base_011) 基礎題：平面兩座標的面積 : 題目名稱：平面兩座標的面積 (題目修改) (BACIC) 題目內容：輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，計算並顯示這兩點所圍之面積。(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。) 數字範圍：整數1 –100
#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=(a-c)*(b-d);
	if(ans<0) ans = -ans;
	printf("%d",ans);
}
