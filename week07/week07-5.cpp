#include<stdio.h>
#include<algorithm>

int main()
{
    int a[10]={9,8,7,1,2,3,4,5,6,0};
    std::sort(a,a+10);

    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
