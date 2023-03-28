///Week07-5.cpp step03-1 用 C++ 的方法來排
#include <stdio.h>
#include <algorithm> ///沒有.h 為了 std::sort()
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
    std::sort(a, a+10);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}
