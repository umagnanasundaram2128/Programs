#include<stdio.h>
int main()
{
	char s;
	printf("Enter a character :");
	s=getchar();
	getchar();
	if(s>='a' && s<='z')
	{
		printf("\nLOWER CASE");
	}
	else
	{
		printf("\nUPPER CASE");
	}
	return 0;
}
