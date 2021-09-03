//7 rd toggle
#include<stdio.h>

unsigned int OffBit(unsigned int iNo)
{
	unsigned int iMask=0x00000040;
	unsigned int Result=0;

	Result=iNo ^ iMask;

	return Result;
}

int main()
{
	unsigned int iValue;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	iRet=OffBit(iValue);
	printf("Number after updation is %d\n",iRet);
	return 0;
}