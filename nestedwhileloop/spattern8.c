#include<stdio.h>
int main()
{
	

	int i='A',n='A';
	while(i<='E')
	{
		int j='A';
		while(j<='E')
		{
			printf("%c\t",n++);
			j++;
		}
		printf("\n");
		i++;
	}
	
}
	