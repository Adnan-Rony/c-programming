#include<stdio.h>
int main()
{
    char str1[100]="my name is ";
    char str2[]="adnan rony";
    int i=0,j=0,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;


    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];//this line don't understant.
        j++;
    }
    printf("str1 :%s",str1);



    return 0;
}
