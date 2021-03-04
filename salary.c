#include <stdio.h>

int main()
{
    float b,hra,da,gs;
    scanf("%f",&b);
    if(b<10000)
    {
        hra=(b*0.15);
        da=(b*0.60);
        gs=b+hra+da;
    }
    else if(b>=15000)
    {
        hra=3000;
        da=(b*0.98);
        gs=b+hra+da;
    }
    printf("The Gross Salary is = %.2f",gs);
    return 0;
}
