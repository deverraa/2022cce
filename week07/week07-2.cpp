#include<stdio.h>

int main()
{
  //FILE *fout = fopen("file.txt","w");//write�g
    FILE *fin  = fopen("file.txt","r");///readŪ
    ///fprintf(fout, "Hello World\n");
    char line[200];
    //scanf("%s",line);
    fscanf(fin, "%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

    fscanf(fin, "%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);
}
