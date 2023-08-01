#include<stdio.h>
int main()
{
    int n,num[100],i;
    printf("enter the number:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        if(num[i]<0)
        {
            printf("%d",num[i]);
        }

    }


}
