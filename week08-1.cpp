#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int bad;
    for(int i=2;i<n;i++)
    {
            if(n%i==0)bad=1;
    }
    if(bad=0)printf("%d是質數",n);
    else printf("%d 不好,不是質數",n);

}
