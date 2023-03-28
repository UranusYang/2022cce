///Week07-3.cpp step02-1 sort排序 sorting
///大一教過 Bubble sort 泡泡排序
///if判斷，for迴圈，array陣列
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 6, 5, 4, 3};

    for(int k=0; k<10-1; k++){ ///做很多次 攝影師拍團體照，排高低
        for(int i=0; i<10-1; i++){
            if(a[i] > a[i+1]){ ///不對的時候，就...
                int temp = a[i]; ///交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++){
            printf("%d ", a[i] );
        }
        printf("\n");
    }
}
