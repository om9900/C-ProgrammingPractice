
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	int Flag=0;
	if((ch>='0'&&ch<='9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}		
}

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter the character\n");
	scanf("%c",&cValue);

	bRet=ChkAlpha(cValue);

	if(bRet==TRUE)
	{
		printf("It is Digit\n");
	}
	else
	{
		printf("It is Not a Digit\n");
	}
	return 0;
}