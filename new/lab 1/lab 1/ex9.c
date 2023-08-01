#include<stdio.h>
int main()
{
    char name[10];
    int id;
    printf("enter your name\n",name);
    scanf(" %[^\n]",&name);
    printf("enter your id\n",id);
    scanf("%d",&id);
    printf("thank you");
    return 0;
}
