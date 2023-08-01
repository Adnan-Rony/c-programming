#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("enter the number ");
    for(int i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i=0; i<=10; i++)
    {
        sum=sum+i;
    }
    printf("sum is %d \n",sum);

    printf("avg is %.2f \n",(float)sum/10);

    return 0;
}
