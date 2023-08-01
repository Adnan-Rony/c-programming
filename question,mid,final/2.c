#include<stdio.h>
int main()
{
    int number,rate,talk;

    scanf("%d%d%d",&number,&rate,&talk);
    if(number>=rate*talk)
    {
        printf("call");
    }
    else printf("recharge");
}
