/*5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input :2395
Output :  -15 (2 - 17)
Input :1018
Output : 6 (8 - 2)
Input :8440
Output :  16 (16 - 0)
Input : 5733
Output :-18 (0 - 18)*/

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iSumEven=0;
	int iSumOdd=0;
	int iResult=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		else
		{
			iSumOdd=iSumOdd+iDigit;
		}
		
		iNo=iNo/10;
	}
	iResult=iSumEven-iSumOdd;

	return iResult; 
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=MultDigits(iValue);

	printf(" %d",iRet);

	return 0;
}
