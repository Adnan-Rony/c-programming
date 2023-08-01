#include<stdio.h>
int main()
{
    int num[100],value,n,i;
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

        if(value== num[i])
        continue;
         printf("%d\n",num[i]);


    }
    return 0;
}
