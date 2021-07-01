//5. Accept number from user and check whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if(iNo%2==0)
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
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
	if(bRet==1)
	{
		printf("Even Number");
	}
	else
	{
		printf("Odd Number");
	}
	
	return 0;
}
