#include<stdio.h>
int main()
{
	int number[3][3];
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
			if(number[i][j]==0)
			{
				printf(" ");
			}
			else
			{
				printf("%d",number[i][j]);
			}
		}
		printf("\n");
	}
	
	
}