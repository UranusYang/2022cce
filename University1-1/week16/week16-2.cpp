///字串相關的函式
#include <stdio.h>
#include <string.h>
char line[3000];
char line2[3000];///在外面宣告比較好(空間大，且清為0)
int main()
{
    printf("請輸入一行字(不要有空格)\n");
    scanf("%s", line );

    int N=strlen(line);///函式1
    printf("字串長度是:%d\n", N);

    strcpy(line2, line);///函式2 左邊 a=10 右邊
    printf("line2: %s\n", line2);
}

