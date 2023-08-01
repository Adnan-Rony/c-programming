

#include<stdio.h>
int main()
{
    int i,j;
    int adu[3][4],jadu[3][4];
    printf("enter elements of A matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("adu[%d][%d]=",i,j);
            scanf("%d",&adu[i][j]);
        }
        printf("\n");
    }
     printf("A =");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
        {
            printf("%d  ",adu[i][j]);
        }
        printf("\n");
    }

    printf("enter elements of B matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("jadu[%d][%d]=",i,j);
            scanf("%d",&jadu[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ",jadu[i][j]);
        }
        printf("\n");
    }
}
