///week01-5.cpp
///Step03-1 ��� '2' ����, �nans++
#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];

    scanf("%s", line);
    int N = strlen(line);

    int ans=0; ///�j��e�� ans=0
    for(int i=0; i<N; i++){
        if(line[i]=='2') ans++;
    } ///�j�餤�� ans++
    printf("%d\n", ans);
    ///�j��᭱�A��ans�L�X��
}
