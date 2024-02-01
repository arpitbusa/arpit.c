#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("enter the number:-");
	scanf("%d",&n);
	do{
		
		printf("%d\n",i*j);
		i++;
		j*=2;
		
	}while(i<=n);
	
	
	
}