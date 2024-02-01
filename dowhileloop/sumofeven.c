#include<stdio.h>
int main()
{
	int i=1,total=0,n;
	printf("enter the number:-");
	scanf("%d",&n);
	do{
		if(i%2==0){
		total+=i;
		}
		i++;
	}while(i<=n);
	printf("%d\n",total);
	
	
}