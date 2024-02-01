#include<stdio.h>
int main()
{
	int number[5];
	int odd=0;
	int even=0;
	for(int i=0;i<5;i++)
	{
		printf("enter the first array value %d:-",i);
		scanf("%d",&number[i]);
	}
	for(int i=0;i<5;i++)
	{
		if(i%2!=0)
		{
			odd+=number[i];
		}
		else
		{
			even+=number[i];
		}
	}
	printf("total even number is:- %d",even);
	printf("\ntotal odd number is:- %d",odd);
}