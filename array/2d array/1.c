#include<stdio.h>
int main()
{
    int i,j;
    int adu[3][4]= { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ",adu[i][j]);
        }
        printf("\n");
    }
}
