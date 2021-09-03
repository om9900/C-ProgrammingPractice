//15 bit on or off 
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(unsigned int iNo)
{
	unsigned int iMask=0x0000B000;
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
		printf("15th Bit is on\n");
	}
	else
	{
		printf("15th Bit is off\n");
	}
	return 0;
}