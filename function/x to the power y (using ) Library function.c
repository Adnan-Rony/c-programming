#include<stdio.h>

int main()
{
    double base,exponent,result=1;

    printf("enter the base \n");
    scanf("%lf",&base);

    printf("enter the exponent \n");
    scanf("%lf",&exponent);

   for(int i=0;i<exponent;i++)
   {
       result=result * base;
   }
   printf("%lf ",result);
}

