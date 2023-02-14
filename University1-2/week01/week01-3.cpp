///任務:輸入資料(很多字母)
#include<stdio.h>
int main()
{
    char c;
    char line[30]; ///陣列，字母的陣列，叫字串
    ///陣列要多大？ 要看題目

    printf("請輸入一個字串,不要太長: "); ///不要超過29
    scanf("%s", line); ///輸入整個字串,沒有 &
    ///會以空格斷字
    printf("你輸入: %s", line);
}
