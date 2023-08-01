
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonent,digit,word,others;
    printf("enter the string");
    gets(str);
    i=vowel=consonent=digit=word=others=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else if(ch>='a' && ch<=z || ch>='A' && ch<='Z')
            consonent++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else if
            others++;
        i++

    }
    word++;
    printf("number of vowel %d",vowel);
     printf("number of consonent %d",consonent);
      printf("number of digit %d",digit);
       printf("number of word %d",word);
        printf("number of others %d",others);


    }

