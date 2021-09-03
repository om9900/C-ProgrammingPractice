#include<stdio.h>

void CountOne(unsigned int iNo1,unsigned int iNo2)
{
	unsigned int iMask1=0x00000001;
	unsigned int iMask2=0x00000001;
	unsigned int Result1=0;
	unsigned int Result2=0,Result=0;
	int iCnt=0;
	
	for (int i = 1; i<=32; i++)
	{
		Result1=iNo1&iMask1;
		Result2=iNo2&iMask2;
		Result=Result1&Result2;
		if(Result)
		{
			printf("%d\n",i);
		}
		iMask1=iMask1<<1;
		iMask2=iMask2<<1;
	}
	
}

int main()
{
	unsigned int iValue1,iValue2;
	int iRet=0;
	printf("Enter First number\n");
	scanf("%u",&iValue1);

	printf("Enter Second number\n");
	scanf("%u",&iValue2);

	CountOne(iValue1,iValue2);
	//printf("Number of on bits are->%d\n",iRet);
	return 0;
}