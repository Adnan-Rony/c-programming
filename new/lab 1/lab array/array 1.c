#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("how many number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    for(i=0;i<n;i++)
     {if(num[i]<0)
        printf("%d",num[i]);}

    return 0;


}
