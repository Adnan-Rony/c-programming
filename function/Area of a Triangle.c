#include<stdio.h>
double result(double a,double b)
{
    return 0.5*a*b;
}
int main()
{
    double base,height;
    printf("enter the base \n");
    scanf("%lf",&base);
     printf("enter the height \n");
    scanf("%lf",&height);

    printf("Area of tringle is %lf ",result(base,height));
}
