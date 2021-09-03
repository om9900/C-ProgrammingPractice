
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

void Display(char ch)
{
	char c='\0';
	if((ch>='A'&&ch<='Z'))
	{
		for(c=ch;c<='Z';c++)
		{
			printf("%c\t",c);
		}
		printf("\n");
	}
	else if((ch>='a'&&ch<='z'))
	{
		for(c=ch;c>='a';c--)
		{
			printf("%c\t",c);
		}
		printf("\n");
	}
	else
	{
		printf("%c\n",ch);
	}
		
}

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter the character\n");
	scanf("%c",&cValue);

	Display(cValue);

	
}