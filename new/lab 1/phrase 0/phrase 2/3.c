#include<stdio.h>
int main()
{
    int n;
    printf("How much money are you willing to spend?\n");
    scanf("%d",&n);
    if(n<30)
    {
        printf("Sorry,you can not buy the chips");
    }
    getch();
    return 0;
}

