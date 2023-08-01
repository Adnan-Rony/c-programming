#include <stdio.h>

int main()
{
    int notes,adu;
    scanf("%d",&notes);
    printf("%d\n",notes);

    printf("%d nota(s) de R$ 100,00\n",notes/100);
    adu=notes%100;

    printf("%d nota(s) de R$ 100,00\n",adu/50);
    adu=adu%50;
    printf("%d nota(s) de R$ 50,00\n",adu/20);
    adu=adu%20;

    printf("%d nota(s) de R$ 10,00\n",adu/10);
    adu=adu%5;
    printf("%d nota(s) de R$ 5,00\n",adu/5);
    adu=adu%2;
    printf("%d nota(s) de R$ 2,00\n",adu/2);
    adu=adu%1;
    printf("%d nota(s) de R$ 1,00\n",adu/1);
    return 0;

}
