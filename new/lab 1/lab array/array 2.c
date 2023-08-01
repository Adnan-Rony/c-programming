#include<stdio.h>
int main()
{
    int num[100],sum=0,n,i;
    printf("how many number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("the sum is %d",sum);
    return 0;

}
