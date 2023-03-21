///Week06-2.cpp 解 LeetCode 的程式
///不是寫完整的程式，只要寫一個函式
///判斷迴文，要用到的程式技巧: 使用 for迴圈，if判斷，while迴圈
bool isPalindrome(int x){
    int x2=x;
    long long int r=0;
    while( x>0 ){
        r = r*10 + x%10;
        x = x/10;
    }
    if(x2 == r) return true;
    else return false;
}
///如果是可以跑的程式，要有main()函式
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321)==true ) printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(1234567899)==true ) printf("1234567899 Yes\n");
    else printf("1234567899 No\n");
}
