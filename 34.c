/*1.Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *   */

#include<stdio.h>

void Pattern(int iNo)
{
	int i=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=0;i<iNo;i++)
	{
		printf(" $ ");
		printf(" * ");
	}
	printf("\n");
}

int main()
{
	int iValue=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	Pattern(iValue);

}