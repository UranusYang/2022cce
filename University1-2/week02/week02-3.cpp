///Week02-3.cpp step02-2 ��� C++�Ӽg
#include <iostream> ///#include <stdio.h>
int main()
{///�ܪ��ܪ������
	long long int a, b; ///64�줸

	while( std::cin >> a >> b){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		std::cout << ans << std::endl;
		///printf("%lld\n", ans);
	}
}
