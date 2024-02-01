#include<stdio.h>
int main()
{
	int number[3][3],total=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("enter the  array value [%d][%d]:-",i,j);
		scanf("%d",&number[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			total+=number[i][j];
			printf("%d",number[i][j]);
		}
		printf("\n");
	}
	printf("this is total:- %d",total);
	
}