#include <stdio.h>

int main()
{
    int a ;
    printf("enter the value");
    scanf("%d",&a);
    if(a%5==0){
        printf("is divisible by 5");
        
    }
    else if(a%3==0){
        printf("is not divisible 3");
        
    }
    else{
        printf("is not divisible 5");
    }

    return 0;
}
n