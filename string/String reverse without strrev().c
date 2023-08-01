#include<stdio.h>
int main()
{
        char str1[40]="adnan";

     char str2[40];

        int i=0,len=0,j;
        while(str1[i]!='\0')
        {
            i++;
            len++;
        }
        for(j=0,i=len-1;i>=0;i--,j++)
        {
            str2[j]=str1[i];
        }
        str2[j]='\o';
        printf("str1 =%s\n",str1);
        printf("str2= %s\n",str2);
}


