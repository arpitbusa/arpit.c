#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("enter the number:-");
	scanf("%d",&n);
	do{
		if(i%2==0){
		sum=i*i;
		printf("%d\n",sum);
		}
		else
		{
			printf("%d\n",i);
		}
		i++;
	}while(i<=n);
	
	
	
}