
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	
	if((ch>='a'&&ch<='z'))
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
		printf("It is Small Case\n");
	}
	else
	{
		printf("It is Not a small Case\n");
	}
	return 0;
}