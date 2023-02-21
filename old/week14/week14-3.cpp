#include<stdio.h>
int a=20;///全部都看得到
void funcA()
{
       a=10;
    printf("在funcA()裡,a是 %d \n",a);
}
int funcB()
{
    int a=30;
    printf("在funcB()裡,a是 %d \n",a);
}

int main()
{
    printf("在main()看到的是a是,%d\n",a);
    funcA();
    funcB();
    printf("在main()看到的是:%d\n",a);
}
