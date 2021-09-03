#include<stdlib.h>
#include<stdio.h>

int Difference(int arr[],int iSize)
{
	int iSumOdd=0,iSumEven=0,i=0;
	if(arr==NULL||iSize<=0)
	{
		return 0;
	}
	for(i=0;i<iSize;i++)
	{
		if(arr[i]%2!=0)
		{
			iSumOdd=iSumOdd+arr[i];
		}
		else
		{
			iSumEven=iSumEven+arr[i];
		}
		
	}
	return iSumEven-iSumOdd;
}


int main()
{
	int i=0,iLength=0,iRet=0;
	int *arr=NULL;

	printf("Enter no of elements");
	scanf("%d",&iLength);

	arr=(int *)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		scanf("%d",arr+i);
	}
	
	iRet=Difference(arr,iLength);
	printf("Difference  is %d \n",iRet);
	free(arr);
	return 0;
}