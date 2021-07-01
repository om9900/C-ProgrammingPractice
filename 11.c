//1 write a program which accept one number from user and print that 
//number of even numbers input:7
//output:2	4	6	8	10	12	14

#include <stdio.h>

void PrintEven(int iNo)
{
	int i=0;
	int j=0;
	if(iNo<=0)
	{
		return;
	}

	for(i=0,j=2;i<iNo;i++)
	{
		printf("%d\t",j);
		j=j+2;
	}

}


int main()
{
	int iValue=0;

	printf("Enter Number");
	scanf("%d",&iValue);

	PrintEven(iValue);
	return 0;
}