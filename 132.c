//1st and last bit on or off 
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(unsigned int iNo)
{
	unsigned int iMask=0x80000001;
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
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	iRet=ChkBit(iValue);
	if(iRet==TRUE)
	{
		printf("1st and last Bit is on\n");
	}
	else
	{
		printf("1st and last Bit is off\n");
	}
	return 0;
}