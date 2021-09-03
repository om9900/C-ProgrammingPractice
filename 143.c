
#include<stdio.h>

int CountOne(unsigned int iNo)
{
	unsigned int iMask=0x00000001;
	unsigned int Result=0;
	int iCnt=0;
	
	for (int i = 1; i<=32; i++)
	{
		Result=iNo&iMask;
		if(Result==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}

int main()
{
	unsigned int iValue;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	iRet=CountOne(iValue);
	printf("Number of on bits are->%d\n",iRet);
	return 0;
}