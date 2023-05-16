///SOIT107_Base_008：基礎題：將一連串整數相乘
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	int ans=1,a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("Enter a value: ");
		ans=ans*a[i];
	}
	printf("Product of the %d values is %d",n,ans);
}
