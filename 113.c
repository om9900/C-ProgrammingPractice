#include<stdio.h>

int strlwrx(char str[])
{
	

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		
		if(*str>='A'&& *str<='Z')
		{
			*str=*str+32;
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
	

	strlwrx(arr);

	printf("Modified String is-> %s\n",arr);

	return 0;
}