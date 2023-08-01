#include <stdio.h>
int main()
{
    float w,x,y,z,sum,division, subtract;
    printf("enter the value of w\n",w);
    printf("enter the value of x\n",x);
    printf("enter the value of y\n",y);
    printf("enter the value of z\n",z);
    scanf("%f %f %f %f",&w,&x,&y,&z);
    sum=w+x+y+z;
    division=sum/2;
    subtract=division-1;
    if(w>=0 && x>=0 && y>=0 && z>=0)
    {
        printf("%.2f\n",subtract);
    }
    else
    {
        printf("it will not work");
    }
    return 0;
}
