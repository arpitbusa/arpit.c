#include<stdio.h>
int main()
{
	char n='A';
	 char i='A';
	while(i<='E')
	{
		int j='A';
		while(j<=i)
		{
			if(i%2==0){
			printf("%c ",n+32);
			n++;
			
			}
			
			else{
				printf("%c ",n++);
				
			}
			j++;
		}
		printf("\n");
		i++;
	}
	
}