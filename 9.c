//4. Accept two numbers from user and display first number in second
//number of times.

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int i=0;
	if(iFrequency<0)
	{
		iFrequency=-iFrequency;
	}
	
	for(i=0;i<iFrequency;i++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter First number\n");
	scanf("%d",&iValue);
	
	printf("Enter Second Number\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}

