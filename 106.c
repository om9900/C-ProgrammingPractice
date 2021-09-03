#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	char Crr[8]={'!','@','#','%','^','&','*'};
	int flag=0;
	int iCnt=0;
	while(Crr!='\0')
	{
		if(ch==Crr[iCnt])
		{
			flag=1;
			break;	
		}
		iCnt++;
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
	char ch='\0';
	BOOL bRet=FALSE;

	printf("Enter the character\n");
	scanf("%c",&ch);
	bRet=ChkSpecial(ch);
	
	if(bRet==TRUE)
	{
		printf("Itn is Special character\n");
	}
	else
	{
		printf("Not Special character\n");
	}
}