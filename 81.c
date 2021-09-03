#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
	int i=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%5==0 && Arr[i]%3==0)
		{
			printf("-> %d\n",Arr[i]);
		}
	}
}

int main()
{
	int *arr;
	int iSize=0,i=0,iRet=0;

	printf("Enter Number of Elements");
	scanf("%d",&iSize);

	arr=(int *)malloc(iSize *sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to Allocate memory\n");
		return -1;
	}
	printf("Enter %d Elements\n",iSize);
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}

	Display(arr,iSize);

	free(arr);

	return 0;
}