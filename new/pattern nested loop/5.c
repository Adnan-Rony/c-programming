#include<stdio.h>
int main()
{
int n,row,col;
scanf("%d",&n);
for(row=1;row<n;row++)
{
    for(col=1;col<=row;col++)
    {
       printf("%d",row);//2 ta pattern equal korle
    }
    printf("\n");

}
for(row=n;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
       printf("%d",row);
    }
    printf("\n");

}


 return 0;
}


