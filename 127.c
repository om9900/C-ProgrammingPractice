#include<stdio.h>

void strcatX(char src[],char dest[])
{
	if(src==NULL||dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		src++;
	}
	//dest--;
	while(*dest!=0)
	{
		*src=*dest;
		src++;
		*dest++;
	}
	*src='\0';
}

int main()
{
	char arr[40];
	char brr[40];

	printf("Enter The First String\n");
	scanf("%[^'\n']s",arr);

	printf("Enter The Second String\n");
	scanf(" %[^'\n']s",brr);

	strcatX(arr,brr);
	printf("After concat string is %s\n ",arr);
	return 0;
}