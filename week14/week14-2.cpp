#include<stdio.h>
int z=10;
void func()
{
    int y;
    printf("剛進來func()時,Z是 %d \n",z);
    z=2;
    printf("在func()裡,把Z改成是 %d \n",z);
}
int main()
{
    int x;
    func();

    printf("在main()裡,Z是 %d \n",z);
    z=1;
    printf("main()裡,把Z改成是 %d \n",z);
}
