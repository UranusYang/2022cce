///��r��ϹL�ӦL
/// ABC => CBA , 1234567 => 7654321
#include <stdio.h>
int main()
{
    char line[3000];
    printf("�п�J�r��: ");

    scanf("%s", line );

    ///�^�Ф��e���ʧ��ϦL for(int i=99; i>=0; i--) printf("%d ",a[i]);

    int N=0;
    for(int i=0;    ; i++){
        if( line[i]==0 ) break;
        N++;
    }

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
