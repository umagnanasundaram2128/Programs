#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char bin[10];
	printf("Enter a binary value	:");
	scanf("%s",bin);
	l=strlen(bin);
	for(i=0;i<l;i++)
	{
		if(bin[i]=='0')
		{
			bin[i]='1';
		}
		else if(bin[i]=='1')
		{
			bin[i]='0';
		}
		else
		{
			printf("Enter a valid binary number!");
			return 0;
		}
	}
	printf("\n %s",bin);
	return 0;
}
