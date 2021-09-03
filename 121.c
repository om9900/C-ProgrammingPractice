#include <stdio.h>

int ChkChar(char *str,char ch)
{
	int iCnt=0,i=0,index=0;
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	str--;
	for (i =1; i<=iCnt; i++,str--)
	{
		if(*str==ch)
		{
			break;
		}
	}
	index=iCnt-i;
	if(index==0)
	{
		return -1;
	}
	else
	{
		return index;
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
