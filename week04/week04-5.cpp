#include<stdio.h>
char mirrored_char(char c)
{
	char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[]="A   3  HILKJM O   2TUVWXY51SE Z  8 ";

	for(int i=0; table1[i];i++)
	{	if( c ==table1[i] )return table2[i];	}

	return ' ';


}

int main()
{
	char c;
	scanf("%c",&c);
	printf("%c\n",mirrored_char(c));
}
