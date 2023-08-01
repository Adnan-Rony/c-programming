#include<stdio.h>
int main()
{
    int n,sum=0,tk[1000],negative=0,positive=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&tk[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+tk[i];

    }
    printf("all the number sum :%d\n",sum);
    for(int i=0; i<n; i++)
    {
        if(tk[i]<0)
        {
              negative=negative+tk[i];
        }


    }
    printf("negative number sum :%d",negative);

         for(int i=0; i<n; i++)
         {
             if(tk[i]>=0)
             {
                 positive=positive+tk[i];
             }
         }
         printf("all positive  number sum :%d",positive);

}
