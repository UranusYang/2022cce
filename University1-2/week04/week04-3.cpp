///Week04-3.cpp step02-2
#include <stdio.h>
#include <string.h>///step02-2
int testMirror(char line[50]) ///�Ψ禡�ӸѨM���D
{
    return 0; ///�����˳����O�蹳�r��
}
int testPalindrome(char line[50])///step02-2 �Ψ禡�ӸѨM���D
{
	int N = strlen(line); ///below is step02-1
	int yes=0;
	for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) return 1; ///yes�Ӧn�F�A�����F printf("������yes�����A�O�j��\n");
    else return 0; ///�u�A�S���� printf("���O������yes�A�N���O�j��\n");
}
int main()
{
	char line[50];

	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);

		int p = testPalindrome(line);///step02-2 �Ψ禡�ӸѨM���D
		int m = testMirror(line);///step02-2 �Ψ禡�ӸѨM���D
		if(p==0&&m==0) printf("is not a palindrome.\n\n");
		if(p==1&&m==0) printf("is a regular palindrome.\n\n");
		if(p==0&&m==1) printf("is a mirrored string.\n\n");
		if(p==1&&m==1) printf("is a mirrored palindrome.\n\n");
	}
}
