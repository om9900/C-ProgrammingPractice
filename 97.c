#include<stdio.h>
#include<stdlib.h>

void DigitSum(int *Arr,int iLength)
{
	int i=0;
	int iDigit=0,iSum=0;
	for(i=0;i<iLength;i++)
	{
		iDigit=Arr[i];
		while(iDigit!=0)
		{
			
			iSum=iSum+(iDigit%10);
			iDigit=iDigit/10;
		}
		printf("Sum of digits in %d is %d\n",Arr[i],iSum);
		iSum=0;
	}

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

	DigitSum(arr,iValue);
	

	free(arr);

	return 0;
}