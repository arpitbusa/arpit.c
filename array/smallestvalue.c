int main()
{
    int a,b, small;
    printf("enter the value");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
    small=a;
    }
    else{
    small=b;    
    }
    printf("%d is smallest value",small);
    return 0;
}
