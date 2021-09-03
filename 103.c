#include<stdio.h>

void DisplayASCII()
{
	int i=0;

	for(i=0;i<=255;i++)
	{
		printf("%c\n",i);
		printf("%d\t",i);
		printf("%x\t",i);
		printf("%o\t",i);

	}
	printf("\n");
}


int main()
{
	DisplayASCII();

	return 0;
}


