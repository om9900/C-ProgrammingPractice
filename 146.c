#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkBit(unsigned int iNo,int iPos1,int iPos2)
{
	if(iPos1<1||iPos1>32||iPos2<1||iPos2>32)
	{
		return false;
	}
	
	unsigned int iMask1=0x00000001;
	unsigned int iMask2=0x00000001;

	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);

	unsigned int iMask=iMask1|iMask2;

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
	int iRet=0,iPos1=0,iPos2=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	printf("enter the First bit\n");
	scanf("%d",&iPos1);
	printf("enter the Second bit\n");
	scanf("%d",&iPos2);

	iRet=ChkBit(iValue,iPos1,iPos2);
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