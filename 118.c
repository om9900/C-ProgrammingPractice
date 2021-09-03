#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}
		str++;
	}
	if(*str!='\0')
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
	char arr[20];
	char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	printf("Enter the character\n");
	scanf(" %c",&cValue);

	bRet=ChkChar(arr,cValue);
	if(bRet==TRUE)
	{
		printf("Character Found\n");
	}
	else
	{
		printf("Character not Found\n");
	}

	return 0;
}
