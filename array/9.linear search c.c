
#include<stdio.h>
int main()
{
    int num[]= {10,20,32,45,65,78,99};
    int value,pos;
    printf("enter the value you want to search :");
    scanf("%d",&value);

    for(int i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    printf("the value is found %d",pos);


}
