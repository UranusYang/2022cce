///Week02-4.cpp step03-1 §ï¥Î C++¨Ó¼g
#include <iostream> ///#include <stdio.h>
using namespace std; ///this!!!!
int main()
{
	long long int a, b;
	while( cin >> a >> b){
		long long int ans = a - b;
		if( ans < 0 ) ans = b - a;
		cout << ans << endl;
	}
}
