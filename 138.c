//dynamic bit check karnya sathi
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkBit(unsigned int iNo,int iPos)
{
	if(iPos<1||iPos>32)
	{
		return false;
	}	
	unsigned int iMask=0x00000001;

	iMask=iMask<<(iPos-1);

	unsigned int Result=0;

	Result=iNo & iMask;

	if(Result==iMask)
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
	unsigned int iValue;
	int iRet=0,iPos=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	printf("enter the bit\n");
	scanf("%d",&iPos);

	iRet=ChkBit(iValue,iPos);
	if(iRet==true)
	{
		printf("Bit is on\n");
	}
	else
	{
		printf("Bit is off\n");
	}
	return 0;
}