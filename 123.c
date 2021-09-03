#include<stdio.h>

void StrCpyX(char *str,char *dest)
{
	if(str==NULL || dest==NULL)
	{
		return;
	}

	while(*str!=0)
	{
		*dest=*str;
		str++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter the String\n");
	scanf("%[^'\n']",arr);

	StrCpyX(arr,brr);
	printf("%s\n",brr);	

	return 0;
}
