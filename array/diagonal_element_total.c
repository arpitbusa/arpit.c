#include<stdio.h>
int main()
{
	int number[3][3],diagonal=0,upper=0,lower=0;
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
			if(number[i]==number[j])
			{
				diagonal+=number[i][j];
			}	
			if(number[i]<number[j])
			{
				upper+=number[i][j];
			}
			if(number[i]>number[j])
			{
				lower+=number[i][j];
			}				
		}
	}
		
	
	printf("this is a diagonal totaL is:- %d\n",diagonal);
	printf("this is a upper triangle total is:- %d\n",upper);
	printf("this is a lower triangle total is:- %d\n",lower);
	
	
	
}