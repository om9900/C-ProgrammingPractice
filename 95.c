#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
	int i=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}

		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
	}
	return iMax-iMin;
}
int main()
{
	int *arr=NULL;
	int i,iValue=0,iRet=0;

	printf("Enter number elements\n");
	scanf("%d",&iValue);

	arr=(int *)malloc(iValue*sizeof(int));

	printf("Enter the elements\n");
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet=Difference(arr,iValue);
	printf("Difference  number is %d\n",iRet);

	free(arr);

	return 0;
}