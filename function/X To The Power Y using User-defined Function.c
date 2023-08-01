#include<stdio.h>

    void power(double base,double exponent)
{
    double result=1;
      for(int i=0;i<exponent;i++)
   {
       result=result * base;  //1*2=2
                                //2*2=4
   }
   printf("%lf ",result);
}

int main()
{
    double base,exponent;

    printf("enter the base \n");
    scanf("%lf",&base);

    printf("enter the exponent \n");
    scanf("%lf",&exponent);
    power(base,exponent);

    //printf("power is %lf",result);




}


