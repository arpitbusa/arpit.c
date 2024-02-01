#include<stdio.h>
int main()
{
	

	int i=1,n=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d\t",n++);
			j++;
		}
		n+=5;
		printf("\n");
		i++;
	}
	
}
	