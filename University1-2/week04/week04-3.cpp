///Week04-3.cpp step02-2
#include <stdio.h>
#include <string.h>///step02-2
int testMirror(char line[50]) ///用函式來解決問題
{
    return 0; ///先假裝都不是鏡像字啦
}
int testPalindrome(char line[50])///step02-2 用函式來解決問題
{
	int N = strlen(line); ///below is step02-1
	int yes=0;
	for(int i=0; i<N; i++){
        if( line[i]==line[N-1-i] ) yes++;
    }
    if(yes==N) return 1; ///yes太好了，收齊了 printf("全部都yes收齊，是迴文\n");
    else return 0; ///哎，沒收齊 printf("不是全部都yes，就不是迴文\n");
}
int main()
{
	char line[50];

	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);

		int p = testPalindrome(line);///step02-2 用函式來解決問題
		int m = testMirror(line);///step02-2 用函式來解決問題
		if(p==0&&m==0) printf("is not a palindrome.\n\n");
		if(p==1&&m==0) printf("is a regular palindrome.\n\n");
		if(p==0&&m==1) printf("is a mirrored string.\n\n");
		if(p==1&&m==1) printf("is a mirrored palindrome.\n\n");
	}
}
