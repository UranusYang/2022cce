///Week06-2.cpp �� LeetCode ���{��
///���O�g���㪺�{���A�u�n�g�@�Ө禡
///�P�_�j��A�n�Ψ쪺�{���ޥ�: �ϥ� for�j��Aif�P�_�Awhile�j��
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
///�p�G�O�i�H�]���{���A�n��main()�禡
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321)==true ) printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(1234567899)==true ) printf("1234567899 Yes\n");
    else printf("1234567899 No\n");
}
