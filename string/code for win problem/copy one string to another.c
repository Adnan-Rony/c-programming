#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    printf("enter the string   ");
    gets(a);

    for(int i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }

    printf("first string =%s\n",a);
    printf("second string =%s\n",b);


     return 0;
}
