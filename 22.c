///4.Write a program which accept number from user and return summation of all its non factors.
//Input : 12
//Output : 50
//Input : 10
//Output : 37


#include<stdio.h>

int SumNonFact(int iNo1)
{
	int iSum=0,iCnt=0;

	for(iCnt=1;iCnt<=iNo1;iCnt++)
	{
		if(iNo1%iCnt!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main(int argc, char const *argv[])
{
	int iValue=0;
	int iRet=0;
	printf("Enter First Number\t");
	scanf("%d",&iValue);

	iRet=SumNonFact(iValue);
	printf("Summenation of non factors of %d is :",iRet);
	return 0;
}