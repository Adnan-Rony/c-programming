#include<stdio.h>
int main()
{
    int q[100],n,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&q[i]);
    }

    {
         if(q[i]<0)
        {
            q[i]=1;
        }
        sum=sum+q[i];

    }
    printf("%d\n",sum,);
    for(int i=0; i<n; i++)
    {
        printf("%d",q[i]);
    }
}
