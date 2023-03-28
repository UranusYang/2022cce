///Week07-2.cpp step01-2 檔案的Input/Output
///再回憶大一上的 scanf("%s", line); 讀入一個字
#include <stdio.h>
int main()
{///檔案指標    檔案開啟("檔名", "模式");
 ///FILE * fout = fopen("file.txt", "w"); ///寫 write
    FILE * fin  = fopen("file.txt", "r"); ///讀 read

    ///printf("Hello World\n");
    ///fprintf(fout, "Hello World\n");
    char line[200];
    ///scanf("%s", line);
    fscanf(fin, "%s", line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);


    fscanf(fin, "%s", line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);
}
