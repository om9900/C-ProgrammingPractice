//9th,12th bit on or off 
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkBit(unsigned int iNo)
{
	unsigned int iMask=0x00000900;
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
	if(iRet==true)
	{
		printf("9th and 12th Bit is on\n");
	}
	else
	{
		printf("Bits are off\n");
	}
	return 0;
}