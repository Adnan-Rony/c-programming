#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%4==0 && num%6==0 )
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}
