
#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo)
{
	
	unsigned int iMask=0xF000000F;
	unsigned int Result=0;

	Result=iNo ^ iMask;

	return Result;
}

int main()
{
	unsigned int iValue;
	int iRet=0,iPos;
	printf("Enter number\n");
	scanf("%u",&iValue);

	iRet=ToggleBit(iValue);
	printf("Number after updation is %d\n",iRet);
	return 0;
}