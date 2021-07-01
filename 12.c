//Write a program which accept number from user and print factors of that numbers
//input :24
//output:1	2	4	6	8	12
#include<stdio.h>

void DisplayFactor(int iNo)
{
	int i=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=2;i<=(iNo/2)+1;i++)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
	}
}


int main()
{
	int iValue=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	DisplayFactor(iValue);

	return 0;
}