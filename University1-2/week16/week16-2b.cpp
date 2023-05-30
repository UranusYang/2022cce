///(SOIT107_ADVANCE_002) 進階題：陣列全距 : 寫一陣列大小為6，依序輸入陣列元素，計算陣列元素最大值與最小值的差距
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(int i=1;i<6;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	printf("%d",max-min);
}
