#include<stdio.h>

int struprx(char str[])
{
	

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		
		if(*str>='a'&& *str<='z')
		{
			*str=*str-32;
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
	

	struprx(arr);

	printf("Modified String is-> %s\n",arr);

	return 0;
}