#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("enter the number:-");
	scanf("%d",&n);
	do{
		
		sum=i*i;
		printf("%d\n",sum);
		i++;
	}while(i<=n);
	
	
	
}