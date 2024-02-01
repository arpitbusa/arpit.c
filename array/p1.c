#include<stdio.h>
int main()
{
  printf("enter the matrix");
  scanf("%d",&n);
  
  if(n<=0)
 {
  printf("invalidv matrix size please enter a positive integer \n");
 }
  
  int matrix [n][n],i,j,sum=0;
  
  printf("enter the matrix \n");
  
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	      scanf("%d",&matrix[i][j];
		}
	}
	 
  for(i=0;i<n;i++){
     sum += matrix[i][j];
 }
   printf("sum of the right diagonal elements %d\n ", sum);
   
   return 0;
}