#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	for(int n=2; n<=a; n++){

		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}

}
