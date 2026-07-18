#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is largest",a);
    }
    else if(a==b)
    {
        printf(" both numbers are equal");
    }
    else
    {
        printf("%d is largest",b);
    }
        return 0;

}