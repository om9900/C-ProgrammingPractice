#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	int flag=0;
	while(*str!='\0')
	{
		if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
		{
			flag=1;
			break;
		}
		str++;
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[20];
	BOOL bRet=FALSE;

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	bRet=ChkVowel(arr);
	if(bRet==TRUE)
	{
		printf("Contains Vowel\n");
	}
	else
	{
		printf("There is no Vowel\n");
	}
	return 0;
}