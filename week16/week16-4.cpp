#include <stdio.h>
int a[50];
int main()
{
    a[0] = 0;
    a[1] = 1;

    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(int i=0; i<n; i++){
        if(i%3==0) printf("%d ", a[i] );
    }
}
