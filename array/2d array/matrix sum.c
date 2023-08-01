#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;
    int a[10][10],b[10][10],sum[10][10];

    printf("enter the number of row and col:");
    scanf("%d %d",&numberOfRows,&numberOfCols);

//scanning a matrix:
    printf("\n enter the elements for A matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("a[%d][%d]=",i,j);

            scanf("%d",&a[i][j]);
        }
        printf(" \n");
    }

    //scanning b matrix:
    printf("\n enter the elements for B matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("b[%d][%d]=",i,j);

            scanf("%d",&b[i][j]);
        }
        printf(" \n");
    }
    //print a matrix
    printf("A =");
      for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf(" \n");
    }
    //print b matrix:
    printf("\n B");

    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf(" \n");
    }
    //adding the matrix
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    }
    //print c matrix
    printf("\n A + B= ");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",sum[i][j]);

        }
        printf(" \n");
    }

}


