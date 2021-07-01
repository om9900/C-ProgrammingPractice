/* 3. Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input :23 30
Output : 212
Input :10 18
Output : 126
Input : -10 2
Output : Invalid range  */


#include <stdio.h>

int RangeSum(int iNo1,int iNo2)
{
	int iCnt=0,iSum=0;
	if((iNo1>iNo2)||(iNo1<0)||(iNo2<0))
	{
		printf("Invalid Range\n");
		return 0;
	}

	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("Enter First Number\n");
	scanf("%d",&iValue1);

	printf("Enter Second Number\n");
	scanf("%d",&iValue2);

	iRet=RangeSum(iValue1,iValue2);
	printf("Summenation is :%d \n",iRet);
	return 0;
}
