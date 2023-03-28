///Week07-4.cpp step02-3 Quick Sort
///對100萬個數字要排序
///之前的泡泡sort, selection sort 對100億次的迴圈
///但用 Quick Sort 只要 2000萬次就結束了
#include <stdio.h>
#include <stdlib.h> ///qsort()
int compare(const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
    qsort( a, 10, sizeof(int), compare);
    for(int i=0; i<10; i++) printf("%d ", a[i] );
}
