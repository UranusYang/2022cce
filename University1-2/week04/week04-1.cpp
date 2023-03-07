///Week04-1.cpp step01-1
///Step1: Input & Output OK (with while-loop)
#include <stdio.h>
int main()
{
	char line[50];

	while( scanf("%s", line)==1 ){
		printf("%s -- ", line);

		///your code here!

		printf("is not a palindrome.\n\n");
	}
}
