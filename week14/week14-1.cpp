#include<stdio.h>
int sum(int a, int b);
int main()
{
    ///在用之前要筅宣告declare或定義define
    int ans = sum(2,3);///使用 呼叫
    printf("ans : %d",ans);
}

int sum(int a, int b)///定義define
{
    return a+b;
}///回傳
