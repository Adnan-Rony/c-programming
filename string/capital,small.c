#include<stdio.h>
int main()
{
    char ch[100];
    int i,capital,small,digit;
     i=capital=small=digit=0;
    printf("enter the string  ");
    gets(ch);
    while(ch[i]!='\0')
    {


        if(ch[i]>=65 && ch[i]<=90)
            capital++;
        else if(ch[i]>=97 && ch[i]<=122)
            small++;
        else if(ch[i]>=48 && ch[i]<=57)
            digit++;

        i++;
    }
    printf("number the capital letter  %d\n",capital);
    printf("number the small letter  %d\n",small);
    printf("number the digit  %d\n",digit);


}
