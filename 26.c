/*3.Write a program which accept number from user and count frequency of 2 in it.
Input :
Output : 2395
1
Input :
Output : 1018
0
Input :
Output : 9000
0
Input :
Output : 922432
3*/
#include<stdio.h>

int CountTwo(int iNo)
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
		if(iDigit==2)
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

	iRet=CountTwo(iValue);

	printf("No of Two in %d is %d",iValue,iRet);

	return 0;
}