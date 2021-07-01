//1.Write a program which accept number from user and display its multiplication of factors.
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
//Input : 13
//Output : 1 (1)
//Input : 10
//Output : 10 (1 * 2 * 5)
#include<stdio.h>

int FactorsMult(int iNo1)
{
	int iMult=1,iCnt=0;

	for(iCnt=1;iCnt<=((iNo1/2) +1);iCnt++)
	{
		if(iNo1%iCnt==0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
}

int main(int argc, char const *argv[])
{
	int iValue=0;
	int iRet=0;
	printf("Enter First Number\t");
	scanf("%d",&iValue);

	iRet=FactorsMult(iValue);
	printf("%d",iRet);
	return 0;
}