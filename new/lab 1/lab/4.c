#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y+z && y<x+z && z<x+y)
    {
        printf("valid");
    }
    else
    {
        printf("not valid");
    }
    return 0;
}
