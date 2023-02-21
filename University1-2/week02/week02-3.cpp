///Week02-3.cpp step02-2 改用 C++來寫
#include <iostream> ///#include <stdio.h>
int main()
{///很長很長的整數
	long long int a, b; ///64位元

	while( std::cin >> a >> b){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		std::cout << ans << std::endl;
		///printf("%lld\n", ans);
	}
}
