///Week02-2.cpp step02-1 讀懂(英文的)題
///快速技巧:只看你看得懂的 數字
/// 10 12 => 2
/// 10 14 => 4
/// 100 200 => 100
/// 400 300 => 100 用 if( ans < 0 ) ans = b - a
#include <stdio.h>
int main()
{///很長很長的整數
	long long int a, b; ///64位元

	while(scanf("%lld%lld", &a, &b)==2){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		printf("%lld\n", ans);
	}
}
