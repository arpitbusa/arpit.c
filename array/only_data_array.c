#include<stdio.h>
int main()
{
	int number[5];
	for(int i=0;i<5;i++)
	{
		printf("enter the first array value %d:-",i);
		scanf("%d",&number[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("the element %d value %d\n",i,number[i]);
	}
	
	for(int j=0;j<5;j++)
	{
		printf("enter the second array value %d:-",j);
		scanf("%d",&number[j]);
	}
	for(int j=0;j<5;j++)
	{
		printf("the element %d value %d\n",j,number[j]);
	}
	
	
}
