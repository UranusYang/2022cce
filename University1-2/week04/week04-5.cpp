///Week04-5.cpp step03-2 利用字串、字元陣列，來把程式簡化成只有1個if()
///下週可用這個版本，也可用前1個 36行if的版本
#include <stdio.h>
char mirrored_char(char c)
{
    char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0; table1[i]!=0; i++){
        if(c==table1[i]) return table2[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c\n", mirrored_char(c) );
}
