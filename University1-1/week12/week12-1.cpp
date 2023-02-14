///¿ï¾Ü±Æ§Çªk Selection Sort
#include <stdio.h>
int a[10]={4,3,2,1,5,6,9,8,7,10};
int main()
{
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i] > a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ", a[i] );
    }
}
