
#include<stdio.h>
int main()
{
    int num[1000],n;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

        int value,pos;
    printf("enter the value you want to search :");
    scanf("%d",&value);

    for(int i=0; i<n; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    printf("the value is found %d",pos);


}
