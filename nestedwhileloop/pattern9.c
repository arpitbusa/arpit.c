#include<stdio.h>
int main()
{
	char i='A',n='A';
	while(i<='E')
	{
		int j='A';
		while(j<=i)
		{
			printf("%c ",n++);
			j++;
			
		}
		printf("\n");
		i++;
	}
	
}