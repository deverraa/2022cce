#include<stdio.h>
int main()

{
    printf("輸入一個數字n: ");

    int n;
    scanf("%d",&n);

    if(n>10) printf("n>10");
    if(n<10) printf("n<10");
    if(n==10) printf("n==10");
}
