#include<stdio.h>

void StrCpyX(char *str,char *dest,int iCnt)
{
	if(str==NULL || dest==NULL)
	{
		return;
	}

	while(*str!=0&&(iCnt!=0))
	{
		*dest=*str;
		str++;
		dest++;
		iCnt--;
	}
	*dest='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	int iValue=0;

	printf("Enter the String\n");
	scanf("%[^'\n']",arr);
	printf("Enter the value\n");
	scanf("%d",&iValue);

	StrCpyX(arr,brr,iValue);
	printf("%s\n",brr);	

	return 0;
}
