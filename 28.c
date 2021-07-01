/*5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input :
Output : 2395
3
Input :
Output : 1018
3
Input :
Output : 9440
3
Input :
Output : 96672
1*/

#include<stdio.h>

int Count(int iNo)
{
	int iDigit=0;
	int iCount=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iCount++;
		}
		
		iNo=iNo/10;
	}
	return iCount;
}


int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=Count(iValue);

	printf(" %d",iRet);

	return 0;
}