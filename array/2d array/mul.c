#include<stdio.h>
int main()
{

    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;;
    printf("enter row and col for first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("enter row and col for second matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("error !!");

        printf("enter row and col for first matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("enter row and col for second matrix: ");
        scanf("%d %d",&r2,&c2);
    }
    //first matrix input
       printf("\n enter the elements for first matrix.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    //second maatrix input :
       printf("\n enter the elements for second matrix.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }
    //first matrix out put;
    printf("\n first matrix\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d   ",first[i][j]);

        }
        printf("  \n");
    }
    //second matrix:
    printf("\n second  matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d   ",second[i][j]);

        }
        printf("   \n");
    }
}
