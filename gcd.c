#include<stdio.h>


    int gcd(int a, int b){
        if(b==0)
        return 0;
        return gcd(b, a % b);
    }
    int main()
    {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);

        printf("GCD=%d",gcd(a,b));
        gcd(6,7);
        return 0;
    }
