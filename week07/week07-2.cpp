#include<stdio.h>

int main()
{
  //FILE *fout = fopen("file.txt","w");//write寫
    FILE *fin  = fopen("file.txt","r");///read讀
    ///fprintf(fout, "Hello World\n");
    char line[200];
    //scanf("%s",line);
    fscanf(fin, "%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);

    fscanf(fin, "%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);
}
