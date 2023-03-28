#include<stdio.h>

int main()
{
    FILE *fout = fopen("file.txt","w");
    fprintf(fout, "Hello World\n");

    printf("檔案出現啦,請檢查檔案總管\n");
}
