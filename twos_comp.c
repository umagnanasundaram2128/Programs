#include<stdio.h>
#include<string.h>
void toggle(char bin[],int end)
{
	int i;
	for(i=0;i<end;i++)
	{
		if(bin[i]=='0')
		{
			bin[i]='1';
		}
		else if(bin[i]=='1')
		{
			bin[i]='0';
		}
		
	}
}

int main()
{
	int l,i;
	int count = 0;
	char bin[10];
	printf("Enter a binary value	:");
	scanf("%s",bin);
	l=strlen(bin);
	for(i=l-1;i>=0;i--)
	{
		
		if(bin[i]=='0')
		{
			continue;
		}
		if(bin[i]>'1')
		{
			printf("invalid binary number");
			return 0;
		}
		break;
	}
	toggle(bin,i);
	printf("\n%s",bin);
	return 0;
}
