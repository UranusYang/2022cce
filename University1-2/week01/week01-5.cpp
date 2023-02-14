///week01-5.cpp
///Step03-1 找到 '2' 之後, 要ans++
#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];

    scanf("%s", line);
    int N = strlen(line);

    int ans=0; ///迴圈前面 ans=0
    for(int i=0; i<N; i++){
        if(line[i]=='2') ans++;
    } ///迴圈中間 ans++
    printf("%d\n", ans);
    ///迴圈後面，把ans印出來
}
