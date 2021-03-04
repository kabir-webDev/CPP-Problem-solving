#include <stdio.h>

int main()
{
    int a,f,l,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    l=a%10;
    while(a>10)
    {
        a=a/10;
    }
    f=a;
    sum=f+l;

    printf("The sum of first and last number is = %d",sum);
    return 0;
}
