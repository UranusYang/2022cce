///Week02-2.cpp step02-1 Ū��(�^�媺)�D
///�ֳt�ޥ�:�u�ݧA�ݱo���� �Ʀr
/// 10 12 => 2
/// 10 14 => 4
/// 100 200 => 100
/// 400 300 => 100 �� if( ans < 0 ) ans = b - a
#include <stdio.h>
int main()
{///�ܪ��ܪ������
	long long int a, b; ///64�줸

	while(scanf("%lld%lld", &a, &b)==2){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		printf("%lld\n", ans);
	}
}
