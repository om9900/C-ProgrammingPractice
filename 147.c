#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo,int iStart,int iEnd)
{
	if(iStart<1||iStart>32||iEnd<1||iEnd>32)
	{
		return 0;
	}

	unsigned int iMask1=0xffffffff;
	unsigned int iMask2=0xffffffff;
	unsigned int iMask;
	unsigned int Result=0;
	
	iMask=iMask<<(iStart-1);
	iMask=iMask>>(32-iEnd);
	iMask=iMask1&iMask2;

	Result=iNo ^ iMask;

	return Result;
}

int main()
{
	unsigned int iValue;
	int iRet=0,iPos1=0,iPos2=0;
	printf("Enter starting number\n");
	scanf("%u",&iValue);

	printf("enter the starting bit\n");
	scanf("%d",&iPos1);

	printf("enter the ending bit\n");
	scanf("%d",&iPos2);

	iRet=ToggleBit(iValue,iPos1,iPos2);
	
	printf("Number after updation is %d\n",iRet);
	return 0;
}
