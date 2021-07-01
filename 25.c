/*2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input :
Output : 2395
There is no Zero
Input :
Output : 1018
It Contains Zero
Input :
Output : 9000
It Contains Zero
Input :
Output : 10687
It Contains Zero*/
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkZero(int iNo)
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
		if(iDigit==0)
		{
			return 1;
		}

		iNo=iNo/10;
	}

	return 0;
}


int main()
{
	int iValue=0;
	bool
	 bRet=FALSE;

	printf("Enter number");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);

	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}

	return 0;

}