#include<stdio.h>
int main()
{
    int num[5],i,sum=0;//sc
    printf("enter the number:");
    scanf("%d %d %d %d %d\n",&num[0],&num[1],&num[2],&num[3],&num[4]);

    for(i=0; i<5; i++)
    {
        sum=num[i]+sum;

    }
    printf("%d\n",sum);
    printf("%.5f",(float)sum/5);
}
