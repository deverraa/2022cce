#include<stdio.h>
int z=10;
void func()
{
    int y;
    printf("��i��func()��,Z�O %d \n",z);
    z=2;
    printf("�bfunc()��,��Z�令�O %d \n",z);
}
int main()
{
    int x;
    func();

    printf("�bmain()��,Z�O %d \n",z);
    z=1;
    printf("main()��,��Z�令�O %d \n",z);
}
