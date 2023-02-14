///把字串反過來印
/// ABC => CBA , 1234567 => 7654321
#include <stdio.h>
int main()
{
    char line[3000];
    printf("請輸入字串: ");

    scanf("%s", line );

    ///回憶之前的百束反印 for(int i=99; i>=0; i--) printf("%d ",a[i]);

    int N=0;
    for(int i=0;    ; i++){
        if( line[i]==0 ) break;
        N++;
    }

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
