//1.Write a program which accept number from user and display its multiplication of factors.
//Input : 12
//Output :  144 (1 * 2 * 3 * 4 * 6)
//Input :13
//Output :  1 (1)
//Input :10
//Output :  10 (1 * 2 * 5)

int MultFact(int iNo)
{
	int i=0;
	int iMult=1;
	for (i = 1; i <=(iNo/2) ; ++i)
	{
		if((iNo%i)==0)
		{
			iMult=iMult*i;
		}
	}

	return iMult;
}

#include<stdio.h>

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	iRet=MultFact(iValue);

	printf("%d\n",iRet);
	return 0;
}