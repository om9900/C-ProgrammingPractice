#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt=0;

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		if(*str>='A'&& *str<='Z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet=0;

	printf("Enter String\n");
	scanf("%[^'\n']n",arr);
	//scanf("%d[^'\n']s",arr);

	iRet=CountCapital(arr);

	printf("%d\n",iRet);

	return 0;
}