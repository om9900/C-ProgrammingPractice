//5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Input : 12
//Output : -34 (16 - 50)
//Input : 10
//Output : -29 (8 - 37)

#include<stdio.h>

int FactDiff(int iNo1)
{
	int iSum1=0,iSum2=0;
	int iCnt=0,iResult=0;

	for(iCnt=1;iCnt<iNo1;iCnt++)
	{
		if(iNo1%iCnt==0)
		{
			iSum1=iSum1+iCnt;
		}
		else
		{
			iSum2=iSum2+iCnt;
		}
	}
	printf("%d ",iSum1);
	printf("%d ",iSum2);
	iResult=iSum1-iSum2;
	return iResult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter First Number\t");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);
	printf("Diiference  of factors and non factors of %d is :",iRet);
	return 0;
}