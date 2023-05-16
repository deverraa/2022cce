#include<stdio.h>
int main()
{
	int k,ans=0;
	scanf("%d",&k);

	if( k<=1500 )ans=100;
	else if( k>1500 )
	{	ans=100+(k-1500+249)/250*5;	}

	printf("%d",ans);

}
