#include<stdio.h>
int main()
{
	char i='A';
	int n;
	printf("enter the value:-");
	scanf("%d",&n);
	do{
		if(i%2!=0)
		{
			printf("%c\n",i);
		}
		i++;
	}while(i<=n);

	
	
}