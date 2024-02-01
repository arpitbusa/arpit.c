#include<stdio.h>
int main()
{
	int i=65,n;
	
	printf("enter the value:-");
	scanf("%d",&n);
	
	
	do{
		if(i%4==1)
		{
			printf("%c\n",i);
		}
		{
			printf("%c\n",i+32);
		}
		
		i++;
	}while(i<=n);

	
	
}