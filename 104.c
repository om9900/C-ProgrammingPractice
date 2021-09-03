
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

void Display(char ch)
{
	
	if((ch>='a'&&ch<='z'))
	{
		ch=ch-32;
		printf("%c\n",ch);
	}
	else if((ch>='A'&&ch<='Z'))
	{
		ch=ch+32;
		printf("%c\n",ch);
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