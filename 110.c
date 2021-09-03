#include<stdio.h>

int CountSmall(char str[])
{
	int iCnt1=0,iCnt2=0;

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		if(*str>='a'&& *str<='z')
		{
			iCnt1++;
		}
		else if(*str>='A'&& *str<='Z')
		{
			iCnt2++;
		}
		str++;
	}
	return iCnt1-iCnt2;
}

int main()
{
	char arr[20];
	int iRet=0;

	printf("Enter String\n");
	scanf("%[^'\n']n",arr);
	

	iRet=CountSmall(arr);

	printf("%d\n",iRet);

	return 0;
}