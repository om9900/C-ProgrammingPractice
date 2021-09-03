#include <stdio.h>

int ChkChar(char *str,char ch)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
			break;
		}
		str++;
	}
	if(*str!=0)
	{
		return iCnt;
	}
	else
	{
		return-1;
	}
	
}
int main()
{
	char arr[20];
	char cValue='\0';
	int bRet=0;
	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	printf("Enter the character\n");
	scanf(" %c",&cValue);

	bRet=ChkChar(arr,cValue);
	printf("index is ->%d\n",bRet);

	return 0;
}
