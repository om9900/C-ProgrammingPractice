
#include<stdio.h>

unsigned int OffBit(unsigned int iNo,int iPos)
{
	if(iPos<1||iPos>32)
	{
		return 0;
	}
	
	unsigned int iMask=0x00000001;
	unsigned int Result=0;
	
	iMask=iMask<<(iPos-1);

	iMask=~iMask;

	Result=iNo & iMask;

	return Result;
}

int main()
{
	unsigned int iValue;
	int iRet=0,iPos;
	printf("Enter number\n");
	scanf("%u",&iValue);

	printf("enter the bit\n");
	scanf("%d",&iPos);

	iRet=OffBit(iValue,iPos);
	printf("Number after updation is %d\n",iRet);
	return 0;
}