#include<stdio.h>

int DisplayDigit(char str[])
{
	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		if(*str>=0 && *str<=9)
		{
			printf("%d\n",*str);
		}
		str++;
	}
}

int main()
{
	char arr[20];
	int iRet=0;

	printf("Enter String\n");
	scanf("%[^'\n']n",arr);
	

	DisplayDigit(arr);

	

	return 0;
}