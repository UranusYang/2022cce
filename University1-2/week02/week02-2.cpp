///Week02-2.cpp step02-1 弄来(璣ゅ)肈
///е硉мォ:眔来 计
/// 10 12 => 2
/// 10 14 => 4
/// 100 200 => 100
/// 400 300 => 100 ノ if( ans < 0 ) ans = b - a
#include <stdio.h>
int main()
{///俱计
	long long int a, b; ///64じ

	while(scanf("%lld%lld", &a, &b)==2){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		printf("%lld\n", ans);
	}
}
