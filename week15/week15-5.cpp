///字串可能很盛，可能很短，不知道長度是多少，怎麼用迴圈？
///字串最後面，一定是 0 值，又叫做 NULL 空，又叫做 '\0'
#include <stdio.h>
int main()
{
    char line[3000];

    printf("請輸入很長很長的字串，不要夾空格，結尾 Enter\n");

    scanf("%s", line );
    printf("它有幾個字母呢？\n");
    printf("%s\n", line);
    int count=0;
    for(int i=0; line[i]!=0; i++){
        count++;
    }
    printf("count:%d\n", count);
}
