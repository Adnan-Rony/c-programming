#include<stdio.h>
int main()
{
    int num[100],n,pos=-1,value,i;
    printf("which number");
    scanf("%d",&value);


    printf("how many number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
        }
        if(pos==-1)
        {
            printf("not found");
        }
        else
        {
            printf("the position is %d",pos);
            return 0;
        }
    }

