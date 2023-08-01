#include<stdio.h>
#define pi 3.1416
int main()
{
    int r1=3,r2=12,r3=8;
    float area1,area2,area3;
    area1= pi*(r1*r1);
    area2= pi*(r2*r2);
    area3= pi*(r3*r3);
    if(area1>250)
    {
        printf("Lucy\tis\nthe\t winner!");
    }
    else if(area2>250)
    {
         printf("Lucy\t is\n the\t winner!");
    }
    else
    {
         printf("Lucy\t is\n the\t winner!");
    }
    getch();
    return 0;
}
