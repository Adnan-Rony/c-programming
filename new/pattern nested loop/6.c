#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1; row<=n; row++) //space print korte chaile n-row hobe
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

            for(col=1; col<=row; col++)
            {
                printf("%d",col);
            }
            printf("\n");
        }


        return 0;
    }

