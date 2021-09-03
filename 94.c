#include<stdio.h>
#include<stdlib.h>

int Minumum(int *Arr,int iLength)
{
	int i=0;
	int iMin=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
		
	}
	return iMin;
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

	iRet=Minumum(arr,iValue);
	printf("Minumum number is %d\n",iRet);

	free(arr);

	return 0;
}