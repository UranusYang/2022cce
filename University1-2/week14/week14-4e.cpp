///SOIT107_Base_011�G��¦�D�G��ƤG���|�h�B��
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+') printf("%d",a+b);
	if(c=='-') printf("%d",a-b);
	if(c=='*') printf("%d",a*b);
	if(c=='/') printf("%d",a/b);
}
