#include<stdio.h>
int main()
{
	int i=1,a1=0,a2=1,sum=0,n;
	printf("enter the number:-");
	scanf("%d",&n);
	do{
		
		printf("%d\n",sum);
		a1=a2;
		a2=sum;
		sum=a1+a2;
		i++;
		
	}while(i<=n);
	
	
	
}