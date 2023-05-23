///(SOIT108_Base_003A) 秈顶肈ㄢ计ぇ丁3计羆㎝ : 肈ヘず甧叫块ㄢパタ俱计(癬﹍计籔沧ゎ计)璸衡癬﹍计いゎ计丁┮Τ3计ぇ羆㎝{ex. 3 9 => 3+6+9=18} 计絛瞅俱计1~1000
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}
