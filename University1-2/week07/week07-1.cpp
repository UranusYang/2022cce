///Week07-1.cpp step01-1 檔案的Input/Output
///先回憶大一上的 printf("Hello World\n");
#include <stdio.h>
int main()
{///檔案指標    檔案開啟("檔名", "模式");
    FILE * fout = fopen("file.txt", "w");
    ///printf("Hello World\n");
    fprintf(fout, "Hello World\n");

    printf("檔案就出現了哦，請檢察檔案總管\n");
}
