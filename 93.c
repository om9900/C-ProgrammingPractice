#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iLength)
{
	int i=0;
	int iMax=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
	}
	return iMax;
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

	iRet=Maximum(arr,iValue);
	printf("Maximum number is %d\n",iRet);

	free(arr);

	return 0;
}