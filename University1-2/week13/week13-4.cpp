///秈顶肈ㄧ计は逼计 : 砞璸ㄧ计f(n)赣ㄧ计肚俱计n计は逼┮舱Θ俱计
///计絛瞅俱计 1  9999 (ぃ10计)
#include <stdio.h>
int main()
{
	int a,s=0;
	scanf("%d",&a);
	while(a>0){
		s=s*10+a%10;
		a=a/10;
	}
	printf("%d\n",s);
}
