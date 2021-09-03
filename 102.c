#include<stdio.h>

void DisplaySchedule(char chDiv)
{
	if((chDiv<'a'&& chDiv>'d')||(chDiv<'A'&&chDiv>'D'))
	{
		printf("Invalid Division\n");
		return;
	}

	if(chDiv=='a'||chDiv=='A')
	{
		printf("Your Exam at 7AM\n");
	}
	else if(chDiv=='b'||chDiv=='B')
	{
		printf("Your Exam at 8:30AM\n");
	}
	else if(chDiv=='c'||chDiv=='C')
	{
		printf("Your Exam at 9.20AM\n");
	}
	else if(chDiv=='d'||chDiv=='D')
	{
		printf("Your Exam at 10.30AM\n");
	}
}


int main()
{
	char cValue='\0';
	
	printf("Enter Your Division\n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);
	return 0;
}