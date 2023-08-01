-
#include<stdio.h>
int main()
{
    int i,j;
    int adu[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("adu[%d][%d]=",i,j);
            scanf("%d",&adu[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ",adu[i][j]);
        }
        printf("\n");
    }
}
