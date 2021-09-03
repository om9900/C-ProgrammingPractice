#include<stdio.h>

void StrCpyCap(char *str,char *dest)
{
	if(str==NULL || dest==NULL)
	{
		return;
	}

	while(*str!=0)
	{
		if(*str>='A'&& *str<='Z')
		{
			*dest=*str;
			dest++;
		}
		str++;
	}
	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter the String\n");
	scanf("%[^'\n']",arr);

	StrCpyCap(arr,brr);
	printf("%s\n",brr);	

	return 0;
}
