#include <stdio.h>
int a[100][100];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        for(int i=n-1;i>=0;i--){
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}
