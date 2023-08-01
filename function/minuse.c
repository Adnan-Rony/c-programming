#include<stdio.h>
int result(int a,int b)
{
    return a-b;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("subtraction of two value is %d",result(n1,n2));
}
